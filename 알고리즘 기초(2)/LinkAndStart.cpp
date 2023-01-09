////https://www.acmicpc.net/problem/15661
//
//#include<iostream>
//#include<algorithm>
//#include<cmath>
//using namespace std;
//
//int N;
//int S[20][20];
//int visited_index[20];
//int true_index[10];
//int ans = 987654321;
//
//void solve(int max,int cnt,int cdx) {
//	if (cnt == max) {
//		int start, link;
//		start = link = 0;
//		for (int i = 0; i < N; i++)
//		{
//			for (int j = i + 1; j < N; j++)
//			{
//				if (visited_index[i] && visited_index[j]) start += (S[i][j] + S[j][i]);
//				if (!visited_index[i] && !visited_index[j]) link += (S[i][j] + S[j][i]);
//			}
//		}
//		ans = min(ans, abs(start - link));
//		return;
//	}
//
//	for (int i = cdx; i < N;i++) {
//		if (visited_index[i]) return;
//		visited_index[i] = true;
//		solve(max,cnt + 1, cdx + 1);
//		visited_index[i] = false;
//	}
//	return;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N;
//	for (int i = 0;i < N;i++) {
//		for (int j = 0; j < N;j++)
//			cin >> S[i][j];
//	}
//	
//	int div;
//	if (N % 2 == 0) div = N/2;
//	else div = N/2 + 1;
//	for (int i = 1; i < div;i ++)
//		solve(i + 1,0, 0);
//	cout << ans;
//	return 0;
//}