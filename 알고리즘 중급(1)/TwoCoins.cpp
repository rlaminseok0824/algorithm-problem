////https://www.acmicpc.net/problem/16197
//
//#include<iostream>
//#include<utility>
//#include<queue>
//using namespace std;
//
//int col, row;
//char board[20][20];
//int visited[20][20][20][20];
//queue<pair<int, int>> coin1, coin2;
//int directionX[4] = { 1, -1, 0, 0 };
//int directionY[4] = { 0, 0, 1, -1 };
//bool fallCoin1 = false, fallCoin2 = false;
//
//void bfs() {
//	while (!coin1.empty()) {
//		int x = coin1.front().second;
//		int y = coin1.front().first;
//		int x2 = coin2.front().second;
//		int y2 = coin2.front().first;
//		coin1.pop();
//		coin2.pop();
//		int cnt = visited[y][x][y2][x2];
//		if (cnt >= 10) {
//			cout << -1;
//			return;
//		}
//		for (int i = 0; i < 4; i++) {
//			int nx = x + directionX[i];
//			int ny = y + directionY[i];
//			int nx2 = x2 + directionX[i];
//			int ny2 = y2 + directionY[i];
//			
//			fallCoin1 = fallCoin2 = false;
//
//			if (nx < 0 || ny < 0 || nx >= row || ny >= col) fallCoin1 = true;
//			if (nx2 < 0 || ny2 < 0 || nx2 >= row || ny2 >= col) fallCoin2 = true;
//
//			if (fallCoin1 && fallCoin2) continue;
//			else if ((fallCoin1 && !fallCoin2) || (!fallCoin1 && fallCoin2)) {
//				cout << cnt + 1;
//				return;
//			}
//
//			if (board[ny][nx] == '#' && board[ny2][nx2] == '#') continue;
//			else if (board[ny][nx] == '#' && board[ny2][nx2] == '.') {
//				if (ny2 == y && nx2 == x) continue;
//				if (visited[y][x][ny2][nx2]) continue;
//				visited[y][x][ny2][nx2] = cnt + 1;
//				coin2.push(pair<int, int>(ny2, nx2));
//				coin1.push(pair<int, int>(y,x));
//			}
//			else if (board[ny][nx] == '.' && board[ny2][nx2] == '#') {
//				if (ny == y2 && nx == x2) continue;
//				if (visited[ny][nx][y2][x2]) continue;
//				visited[ny][nx][y2][x2] = cnt + 1;
//				coin1.push(pair<int, int>(ny, nx));
//				coin2.push(pair<int, int>(y2, x2));
//			}
//			else {
//				if (visited[ny][nx][ny2][nx2]) continue;
//				visited[ny][nx][ny2][nx2] = cnt + 1;
//				coin1.push(pair<int, int>(ny, nx));
//				coin2.push(pair<int, int>(ny2, nx2));
//			}
//		}
//	}
//	cout << -1;
//	return;
//}
//
//int main() {
//	cin >> col >> row;
//	for (int i = 0; i < col; i++) {
//		for (int j = 0; j < row; j++) {
//			cin >> board[i][j];
//			if (board[i][j] == 'o' && coin1.empty()) {
//				coin1.push(pair<int, int>(i, j));
//				board[i][j] = '.';
//			}
//			else if (board[i][j] == 'o' && !coin1.empty()) {
//				coin2.push(pair<int, int>(i, j));
//				board[i][j] = '.';
//			}
//		}
//	}
//	
//	bfs();
//	
//	return 0;
//}