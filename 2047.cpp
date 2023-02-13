#include<iostream>
using namespace std;

/* dp / �ð����⵵ : �ִ� N^2
*  ������ �ܼ��� ������ ���ϴ� ����������, �̸� C++�� Ǯ ���� ���� ������ ������ ����� ������ �ȴ�.
*  ����, ������ ���Ҷ�ó�� ��ͷ� Ǯ ��, �ð� �ʰ��� �߱� ������ �Ľ�Į�� �ﰢ���� �̿��� dp�� ������ Ǯ���Ѵ�.
*  ���� ���� ���� �� �ִ밪�� 100C50�� �� ������ ��� �ڷ������ε� ǥ���� �Ұ����ϱ� ������ ���ο� �ڷ����� ���� �ʿ䰡 �����.
*  �̸� ���Ͽ� ���ο� �ڷ��� longlonglong�� �����. �̴� ������ array�� �����ϰ� �� array�� �� �ڸ��� �´� ���ڰ� ����ǰ��Ѵ�.
*  ���� ���ο� add�� ����� �̸� �̿��Ͽ� �Ľ�Į�� �ﰢ���� ����ϸ� ������ �ذ�ȴ�.
* 
*  ������ ���̵��� S3������, C++ ���� ���� ���̵��� �ް��� �ö󰣴�... ���̵��� ���� ����..��;;

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