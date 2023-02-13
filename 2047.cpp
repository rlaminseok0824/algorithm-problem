#include<iostream>
using namespace std;

/* dp / 시간복잡도 : 최대 N^2
*  문제는 단순히 조합을 구하는 문제이지만, 이를 C++로 풀 때엔 많은 제약이 존재해 어려운 문제가 된다.
*  먼저, 조합을 구할때처럼 재귀로 풀 시, 시간 초과가 뜨기 때문에 파스칼의 삼각형을 이용한 dp로 문제를 풀이한다.
*  또한 문제 조건 중 최대값인 100C50을 할 때에는 어느 자료형으로도 표현이 불가능하기 때문에 새로운 자료형을 만들 필요가 생겼다.
*  이를 위하여 새로운 자료형 longlonglong을 만든다. 이는 숫자의 array로 구현하고 각 array는 각 자리에 맞는 숫자가 저장되게한다.
*  따라서 새로운 add를 만들고 이를 이용하여 파스칼의 삼각형을 사용하면 간단히 해결된다.
* 
*  백준의 난이도는 S3이지만, C++ 한정 문제 난이도가 급격히 올라간다... 난이도에 속지 말자..하;;

*/


typedef struct longlonglong {
	int num[50] = {0,};
	int length = 1;
}lll;

void print(const lll* a) {
	for (int i = a->length -1 ; i >= 0; i--) {
		cout << a->num[i];
	}
	cout << '\n';
}

lll add(const lll* a,const lll* b) {
	int temp;
	int lengths = ((a->length >= b->length) ? a->length : b->length);

	lll ans;
	ans.length = lengths;
	for (int i = 0; i < lengths; i++) {
		temp = a->num[i] + b->num[i] + ans.num[i];
		if (temp >= 10) {
			ans.num[i] = (temp % 10);

			ans.num[i + 1] = (temp / 10);
			if (i + 1 == lengths) {
				ans.length += 1;
			}
		}
		else {
			ans.num[i] = temp;
		}
	}
	return ans;
}


int n, m;
lll res[101][101];

// nCm = n-1Cm-1 + n-1Cm
int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n >> m;

	res[0][0].num[0] = 1;

	for (int N = 1; N <= n; N++) {
		for (int M = 0; M <= m; M++) {
			if (M == 0 || M == N) { 
				res[N][M].num[0] = 1;
			}
			else {
				res[N][M] = add(&res[N - 1][M - 1], &res[N - 1][M]);
			}
		}
	}

	print(&res[n][m]);

	return 0;
}