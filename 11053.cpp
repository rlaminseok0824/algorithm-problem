#include<iostream>
#include<algorithm>
using namespace std;

/* dp / NlogN ����?
* dp �� ���� �����ϸ鼭, �����Դ� ���� �ʾҴ� ����...
* dp ������ �� ���� ���ϰڴ� ��ġ�ڴ�...
* Ǯ�̹����
*  1. �迭�� �Է� ���������� ó������ ���Ѵ�.
*  2. ���� ���� value���� ���� ���� ���� �� ���� dp�� + 1�� �����ϸ� �ȴ�.

* dp Ư. �ڵ带 �˸� ����
*/

int N;
int arr[1001];
int dp[1001];
int len, res = 0;

int main() {
	cin >> N;
	
	for (int i = 1; i <= N; i++)
	{
		cin >> arr[i];
		len = 0;
		for (int j = 1; j < i; j++)
		{
			if (arr[j] < arr[i])
				len = max(dp[j], len);
		}
		dp[i] = len + 1;

		// �ִ� ���̿� �ִ� �� ����
		if (res < dp[i])
		{
			res = dp[i]; // �ִ� ����
		}
	}

	cout << res;
	return 0;
}