////https://www.acmicpc.net/problem/2667
//
//#include<iostream>
//#include<queue>
//#include<utility>
//#include<algorithm>
//using namespace std;
//
//int N;
//char square[27][27];
//int visited[27][27];
//int cnt = 0;
//int weight = 0;
//int x, y;
//vector<int> result;
//void bfs(int row,int col) {
//	if (square[row][col] == '0' || visited[row][col]) return;
//	cnt++;
//	weight = 0;
//	queue<pair<int,int>> q;
//	q.push(pair<int,int>(row,col));
//	visited[row][col] = true;
//	weight++;
//	while (!q.empty()) {
//		x = q.front().first;
//		y = q.front().second;
//		q.pop();
//		if (square[x + 1][y] == '1' && !visited[x + 1][y]) {
//			q.push(pair<int, int>(x + 1, y));
//			visited[x + 1][y] = true;
//			weight++;
//		}
//		if (square[x][y + 1] == '1' && !visited[x][y + 1]) {
//			q.push(pair<int, int>(x, y + 1));
//			visited[x][y + 1] = true;
//			weight++;
//		}
//		if (square[x - 1][y] == '1' && !visited[x - 1][y]) {
//			q.push(pair<int, int>(x - 1, y));
//			visited[x - 1][y] = true;
//			weight++;
//		}
//		if (square[x][y - 1] == '1' && !visited[x][y -1]) {
//			q.push(pair<int, int>(x, y - 1));
//			visited[x][y - 1] = true;
//			weight++;
//		}
//	}
//	result.push_back(weight);
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N;
//
//	for (int i = 1;i <= N;i++) {
//		for (int j = 1; j <= N;j++) {
//			cin >> square[i][j];
//		}
//	}
//
//	for (int i = 1;i <= N;i++) {
//		for (int j = 1; j <= N;j++)
//			bfs(i,j);
//	}
//
//	cout << cnt << '\n';
//	sort(result.begin(), result.end());
//	for (int i = 0; i < result.size();i++)
//		cout << result[i] << '\n';
//	return 0;
//}