////https://www.acmicpc.net/problem/4963
//
//#include<iostream>
//#include<queue>
//#include<utility>
//#include<vector>
//#include<memory.h>
//using namespace std;
//
//int w = 1, h = 1;
//int map[52][52];
//int visited[52][52];
//int cnt = 0;
//int x, y;
//vector<int> result;
//
//void bfs(int row, int col) {
//	if (map[row][col] == 0 || visited[row][col]) return;
//	cnt++;
//	queue<pair<int, int>> q;
//	q.push(pair<int, int>(row, col));
//	visited[row][col] = true;
//	while (!q.empty()) {
//		x = q.front().first;
//		y = q.front().second;
//		q.pop();
//		for (int i = -1;i <= 1;i++) {
//			for (int j = -1; j <= 1;j++) {
//				int nx = x + i;
//				int ny = y + j;
//
//				if (map[nx][ny] == 1 && !visited[nx][ny]) {
//					visited[nx][ny] = true;
//					q.push(pair<int, int>(nx, ny));
//				}
//			}
//		}
//	}
//}
//
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	while (!(w == 0 && h == 0)) {
//		cnt = 0;
//		for (int i = 0; i < 52; i++)
//		{
//			memset(visited[i], false, sizeof(visited[i]));
//			memset(map[i], 0, sizeof(map[i]));
//		}
//
//		cin >> w >> h;
//
//
//		for (int i = 1; i <= h;i++) {
//			for (int j = 1; j <= w;j++) {
//				cin >> map[i][j];
//			}
//		}
//
//		for (int i = 1; i <= h;i++) {
//			for (int j = 1; j <= w;j++) {
//				bfs(i, j);
//			}
//		}
//		result.push_back(cnt);
//	}
//
//	for (int i = 0; i < result.size() - 1;i++) {
//		cout << result[i] << '\n';
//	}
//	return 0;
//}