#include<iostream>
#include<algorithm>
using namespace std;

/* dp의 아주 간단한 문제 /시간복잡도 : n^2 + n = n^2
*	문제의 입력값이 최대 500 /시간제한이 2초 / 최댓값 / 이기 때문에 dp로 문제를 풀면 된다.
*   dp의 처음과 끝은 무조건 그 전의 처음과 끝에서 받아와야하므로 예외 처리를 하고
*   나머지는 위의 두 개중 max값만을 선택적으로 받는다.
*	그리고 마지막으로 최종적으로 나온 것 중 max 값을 찾으면 된다.
*/


int n;
int tri[501][501];

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			cin >> tri[i][j];
		}
	}

	for (int i = 2; i <= n; i++) {
		for (int j = 0; j < i; j++) {
			if (j == 0) {
				tri[i][j] += tri[i - 1][j];
			}
			else if (j == i -1) {
				tri[i][j] += tri[i - 1][j - 1];
			}
			else {
				tri[i][j] += max(tri[i - 1][j -1], tri[i - 1][j]);
			}
		}
	}

	int res = 0;
	for (int i = 0; i < n; i++) {
		res = max(res, tri[n][i]);
	}
	cout << res;
	return 0;
}