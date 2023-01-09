////https://www.acmicpc.net/problem/16929
//
////1. bfs를 이용하여 풀기
//#include<iostream>
//#include<queue>
//#include<utility>
//using namespace std;
//
//int N, M;
//char board[50][50];
//int visited[50][50];
//int directionX[4]{ 1,0,-1,0 };
//int directionY[4]{ 0,1,0,-1 };
//int cnt = 0;
//bool answer = false;
//
//void bfs(int row,int col) {
//	if (visited[col][row]) return;
//	queue<pair<int, int>> q;
//	char curColor = board[col][row];
//	visited[col][row] = 1;
//	q.push(pair<int, int>(row, col));
//	while (!q.empty()) {
//		/*for (int i = 0;i < N;i++) {
//			for (int j = 0; j < M;j++) {
//				cout << visited[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;*/
//
//		int x = q.front().first;
//		int y = q.front().second;
//		q.pop();
//		cnt = 0;
//		for (int i = 0; i <= 3;i++) {
//			int nx = x + directionX[i];
//			int ny = y + directionY[i];
//
//			if (nx < 0 || ny < 0 || nx >= M || ny >= N) continue;
//			else if (board[ny][nx] == curColor) {
//				if (visited[ny][nx]) {
//					cnt++;
//					if (cnt >= 2) {
//						answer = true;
//						return;
//					}
//				}
//				else if (!visited[ny][nx]) {
//					visited[ny][nx] = visited[y][x] + 1;
//					q.push(pair<int, int>(nx, ny));
//				}
//				
//			}
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N >> M;
//	for (int i = 0;i < N;i++) {
//		for (int j = 0; j < M;j++) {
//			cin >> board[i][j];
//		}
//	}
//
//	for (int i = 0;i < N;i++) {
//		for (int j = 0; j < M;j++) {
//			bfs(j, i);
//			if (answer) break;
//		}
//	}
//	if (answer) cout << "Yes";
//	else { cout << "No"; }
//	return 0;
//}