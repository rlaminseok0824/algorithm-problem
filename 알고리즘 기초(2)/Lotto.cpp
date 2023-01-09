////https://www.acmicpc.net/problem/6603
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int k = 1;
//int seq[13];
//int dfs[13];
//int visited[50];
//vector<vector<int>> result;
//
//int promising(int cnt) {
//	for (int i = 0; i < cnt; i++) {
//		if (dfs[cnt] < dfs[i])
//			return 1;
//	}
//	return 0;
//}
//
//void solve(int cnt) {
//	if (cnt == 6) {
//		vector<int> temp;
//		for (int i = 0; i < 6;i++)
//			temp.push_back(dfs[i]);
//		result.push_back(temp);
//	}
//
//	for (int i = 0; i < k;i++) {
//		if (visited[seq[i]]) continue;
//		dfs[cnt] = seq[i];
//		if (promising(cnt)) continue;
//		visited[seq[i]] = true;
//		solve(cnt + 1);
//		visited[dfs[cnt]] = false;
//		dfs[cnt] = 0;
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	while (k != 0) {
//		cin >> k;
//		for (int i = 0;i < k;i++)
//			cin >> seq[i];
//		solve(0);
//		vector<int> temp;
//		result.push_back(temp);
//	}
//
//	for (int i = 0;i <  result.size();i++) {
//		if (result[i].size() == 0) {
//			cout << "\n";
//			continue;
//		}
//		for (int j = 0; j < result[i].size();j++) {
//			cout << result[i][j] << " ";
//		}
//		cout << "\n";
//	}
//	return 0;
//}