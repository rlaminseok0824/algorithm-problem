////https://www.acmicpc.net/problem/16198
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int N;
//int energy[10];
//int visited[10];
//int result = 0;
//void dfs(int cnt, int sum) {
//	if (cnt == N - 2) {
//		result = max(result, sum);
//		return;
//	}
//
//	for (int i = 1; i < N - 1; i++) {
//		if (visited[i]) continue;
//		int left = i - 1, right = i + 1;
//		visited[i] = true;
//		while (visited[left]) left--;
//		while (visited[right]) right++;
//		dfs(cnt + 1, sum + (energy[left] * energy[right]));
//		visited[i] = false;
//	}
//}
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++)
//		cin >> energy[i];
//
//	dfs(0, 0);
//
//	cout << result;
//	return 0;
//}