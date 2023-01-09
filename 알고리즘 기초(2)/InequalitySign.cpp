////https://www.acmicpc.net/problem/2529
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int k;
//char sign[10];
//int dfs[10];
//int visited_num[10];
//vector<vector<int>> result;
//
//void solve(int cnt,int previous) {
//	if (cnt == k + 1) {
//		vector<int> temp;
//		for (int i = 0; i < k + 1;i++)
//			temp.push_back(dfs[i]);
//		result.push_back(temp);
//		return;
//	}
//	
//	for (int i = 0; i < 10;i++) {
//		if (visited_num[i]) continue;
//		else if (sign[cnt] == '<' && i < previous) continue;
//		else if (sign[cnt] == '>' && i > previous) continue;
//		visited_num[i] = true;
//		dfs[cnt] = i;
//		solve(cnt + 1, i);
//		visited_num[i] = false;
//		dfs[cnt] = 0;
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> k;
//	for (int i = 1; i <= k;i++)
//		cin >> sign[i];
//	solve(0,0);
//
//	for (int i = 0; i < result[0].size();i++) {
//		cout << result[result.size() - 1][i];
//	}
//	cout << '\n';
//	for (int i = 0; i < result[0].size();i++) {
//		cout << result[0][i];
//	}
//	return 0;
//}