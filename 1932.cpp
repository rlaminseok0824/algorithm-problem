#include<iostream>
#include<algorithm>
using namespace std;

/* dp�� ���� ������ ���� /�ð����⵵ : n^2 + n = n^2
*	������ �Է°��� �ִ� 500 /�ð������� 2�� / �ִ� / �̱� ������ dp�� ������ Ǯ�� �ȴ�.
*   dp�� ó���� ���� ������ �� ���� ó���� ������ �޾ƿ;��ϹǷ� ���� ó���� �ϰ�
*   �������� ���� �� ���� max������ ���������� �޴´�.
*	�׸��� ���������� ���������� ���� �� �� max ���� ã���� �ȴ�.
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