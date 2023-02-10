#include<iostream>
using namespace std;

/*  간단한 dp 문제 / 시간복잡도 : N + N = N
*  문제의 풀이방법은 간단하지만 이 문제의 핵심은 메모리제한이 4MB인 것이다.
*  따라서 처음 입력 받은 boards의 array를 다시 재활용하면서 쓸 방버을 구상하는 것이 중요하다.
*  1. cin 으로 boards에 값을 저장한다.
*  2. 임의의 3개의 temps 배열을 만든다.
*  3. boards의 값을 바꾸지 않고 temps에 값을 저장하면서 max를 구한다.
*  4. min의 값은 dp처럼 boards의 값을 바꾸어가며 최솟값을 구한다.
*  5, 이렇게 하면 max 와 min의 임의의 두 큰 배열을 안 만들 수 있기 때문에 메모리 초과가 안 일어난다.
*/


#define max(a,b) (a >= b ? a : b)
#define min(a,b) (a >= b ? b : a)

int N;
int boards[100001][3];
int temps[3];
int res = 0;

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> boards[i][0] >> boards[i][1] >> boards[i][2];
	}

	int left, right;
	temps[0] = boards[0][0];
	temps[1] = boards[0][1];
	temps[2] = boards[0][2];

	for (int i = 1; i <= N; i++) {
		
		left = max(temps[0], temps[1]);
		right = max(temps[1], temps[2]);

		temps[0] = left + boards[i][0];
		temps[1] = max(left, right) + boards[i][1];
		temps[2] = right + boards[i][2];
		//cout << temps[0] << " " << temps[1] << " " << temps[2] << endl;
	}

	res = max(temps[0], max(temps[1], temps[2]));
	cout << res << " ";

	for (int i = 1; i < N; i++) {
		left = min(boards[i - 1][0], boards[i - 1][1]);
		right = min(boards[i - 1][2], boards[i - 1][1]);

		boards[i][0] += left;
		boards[i][1] += min(left, right);
		boards[i][2] += right;
	}

	res = min(boards[N - 1][0], min(boards[N - 1][1], boards[N - 1][2]));
	cout << res;
	return 0;
}