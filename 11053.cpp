#include<iostream>
#include<algorithm>
using namespace std;

/* dp / NlogN 정도?
* dp 중 비교적 유명하면서, 나에게는 쉽지 않았던 문제...
* dp 문제를 잘 접근 못하겠다 미치겠다...
* 풀이방식은
*  1. 배열을 입력 받을때마다 처음부터 비교한다.
*  2. 만약 현재 value보다 작은 값을 보면 그 값의 dp값 + 1을 저장하면 된다.

* dp 특. 코드를 알면 쉬움
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

		// 최대 길이와 최대 값 저장
		if (res < dp[i])
		{
			res = dp[i]; // 최대 길이
		}
	}

	cout << res;
	return 0;
}