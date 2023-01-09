////https://www.acmicpc.net/problem/16948
//
//#include<iostream>
//#include<queue>
//#include<utility>
//using namespace std;
//
//int N;
//int board[201][201];
//int start[2], goal[2];
//queue<pair<int, int>> q;
//int dirX[6] = { -2,-2,0,0,2,2 };
//int dirY[6] = { -1,1,-2,2,-1,1 };
//
//void bfs() {
//	while (!q.empty()) {
//		/*for (int i = 1; i <= N; i++) {
//			for (int j = 1; j <= N; j++) {
//				cout << board[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;*/
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//
//		for (int i = 0; i < 6; i++) {
//			int nx = x + dirX[i];
//			int ny = y + dirY[i];
//
//			if (nx < 0 || ny < 0 || nx > N || ny > N) continue;
//			if (board[nx][ny]) continue;
//			if (nx == goal[0] && ny == goal[1]) {
//				cout << board[x][y];
//				return;
//			}
//			board[nx][ny] = board[x][y] + 1;
//			q.push(pair<int, int>(nx, ny));
//		}
//	}
//	cout << -1;
//}
//
//int main() {
//	cin >> N;
//	cin >> start[0] >> start[1];
//	cin >> goal[0] >> goal[1];
//
//	board[start[0]][start[1]] = 1;
//	q.push(pair<int, int>(start[0], start[1]));
//	bfs();
//	return 0;
//}