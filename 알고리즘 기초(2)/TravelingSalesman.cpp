////https://www.acmicpc.net/problem/10971
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int N;
//int W[10][10];
//int tsp[10];
//int visited_index[10];
//int result = 2147483647;
//
//void solve(int cdx,int cnt) {  //cdx는 W의 첫번째 배열
//	if (cnt == N - 1) {
//		if (W[cdx][0] == 0) return;
//		tsp[cdx] = W[cdx][0];
//		int temp = 0;
//		for (int i = 0; i < N;i++) {
//			temp += tsp[i];
//		}
//		result = min(result, temp);
//	}
//
//
//	for (int i = 1; i < N;i++) {
//		if (visited_index[i] || W[cdx][i] == 0) continue;
//		tsp[cdx] = W[cdx][i];
//		visited_index[i] = true;
//		solve(i,cnt + 1);
//		visited_index[i] = false;
//		tsp[cdx] = 0;
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N;
//
//	for (int col = 0; col < N; col++){
//		for (int row = 0; row < N; row++)
//			cin >> W[col][row];
//	}
//
//	solve(0, 0);
//
//	cout << result;
//	return 0;
//}