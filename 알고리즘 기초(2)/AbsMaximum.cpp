////https://www.acmicpc.net/problem/10819
//
//#include<iostream>
//#include<cmath>
//#include<algorithm>
//using namespace std;
//
//int N;
//int seq[8];
//int dfs[8];
//int visited_index[8];
//int result = 0;
//
//void solve(int cnt) {
//	if (cnt == N) {
//		int temp = 0;
//		for (int i = 0; i < N - 1;i++) {
//			temp += abs(dfs[i] - dfs[i + 1]);
//		}
//		result = max(result, temp);
//	}
//
//
//	for (int i = 0; i < N; i++) {
//		if (visited_index[i]) continue;
//		visited_index[i] = true;
//		dfs[cnt] = seq[i];
//		solve(cnt + 1);
//		dfs[cnt] = 0;
//		visited_index[i] = false;
//	}
//}
//
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> seq[i];
//	}
//
//	solve(0);
//
//	cout << result;
//	return 0;
//}