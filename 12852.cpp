#include<iostream>
#include<queue>
#include<algorithm>
using namespace std;

/* dp / �ð����⵵ : N
*  ������ �����µ�, bfs�� Ǯ���ϱ� �޸� �ʰ��� ���� ��Ȳ������ ����
*  �׷��� �׳� N�� �ݺ��� ���� Ǯ����.
*/



#define MAXSIZE (int)1e6 + 1

int n;
pair<int, int> arr[MAXSIZE];  //�ϳ��� cnt // �ϳ��� ������ �� ���


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> n;

	arr[1].first = 0;
	for (int i = 2; i <= n; i++) {
		arr[i].first = arr[i - 1].first + 1;
		arr[i].second = i - 1;

		if (i % 3 == 0) {
			if (arr[i].first > arr[i / 3].first + 1) {
				arr[i].first = arr[i / 3].first + 1;
				arr[i].second = i / 3;
			}
		}

		if (i % 2 == 0) {
			if (arr[i].first > arr[i / 2].first + 1) {
				arr[i].first = arr[i / 2].first + 1;
				arr[i].second = i / 2;
			}
		}
	}
	cout << arr[n].first << '\n';
	int now = n;
	while (true) {
		if (n == 0) break;
		cout << n << " ";
		n = arr[n].second;
	}

	return 0;
}