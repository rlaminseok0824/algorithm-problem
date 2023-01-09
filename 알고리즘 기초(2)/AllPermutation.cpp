////https://www.acmicpc.net/problem/10974
//
//#include<iostream>
//using namespace std;
//
//int N;
//int dfs[8];
//int visited[9];
//
//void permutation(int cnt) {
//	if (cnt == N) {
//		for (int i = 0;i < N;i++)
//			cout << dfs[i] << " ";
//		cout << "\n";
//		return;
//	}
//
//	for (int i = 1; i <= N;i++) {
//		if (visited[i]) continue;
//		visited[i] = true;
//		dfs[cnt] = i;
//		permutation(cnt + 1);
//		visited[i] = false;
//		dfs[cnt] = 0;
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
//	permutation(0);
//	return 0;
//}