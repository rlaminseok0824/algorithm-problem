////https://www.acmicpc.net/problem/14501
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int N;
//int T[15];
//int P[15];
//int dp[15];
//int result = 0;
//
//void solve(int cnt) {
//	if (cnt == N) {
//		int temp = 0;
//		for (int i = 0; i < N;i++) {
//			temp += dp[i];
//		}
//		result = max(result, temp);
//		dp[cnt] = 0;
//		return;
//	}
//	if (cnt + T[cnt] <= N) {
//		dp[cnt] = P[cnt];
//		solve(cnt + T[cnt]);
//		dp[cnt] = 0;
//	}
//	solve(cnt + 1);
//	return;
//}
//
//
//int main() {
//	ios_base::sync_with_stdio(false); 
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N;
//	for (int i = 0; i < N;i++)
//		cin >> T[i] >> P[i];
//	solve(0);
//	cout << result;
//	return 0;
//}