////https://www.acmicpc.net/problem/2178
//
//#include<iostream>
//#include<queue>
//#include<utility>
//#include<algorithm>
//using namespace std;
//
//int N, M;
//char maze[102][102];
//int visited[102][102];
//int x, y;
//int directionX[4]{ 1,0,-1,0 };
//int directionY[4]{ 0,1,0,-1 };
//
//void bfs(int row,int col) {
//	queue<pair<int, int>> q;
//	q.push(pair<int, int>(row, col));
//	visited[row][col] = 1;
//	while (!q.empty()) {
//		/*for (int i = 1; i <= N;i++) {
//			for (int j = 1; j <= M;j++) {
//				cout << visited[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;*/
//		x = q.front().first;
//		y = q.front().second;
//		q.pop();
//		for (int i = 0; i <= 3;i++) {
//			int nx = x + directionX[i];
//			int ny = y + directionY[i];
//
//			if (maze[nx][ny] == '1' && !visited[nx][ny]) {
//				visited[nx][ny] = visited[x][y] + 1;
//				q.push(pair<int, int>(nx, ny));
//			}
//			else if (maze[nx][ny] == '1' && visited[nx][ny] > visited[x][y] + 1) {
//				visited[nx][ny] = visited[x][y] + 1;
//				q.push(pair<int, int>(nx, ny));
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
//	for (int i = 1; i <= N;i++) {
//		for (int j = 1; j <= M;j++) {
//			cin >> maze[i][j];
//		}
//	}
//
//	bfs(1, 1);
//
//	cout << visited[N][M];
//	return 0;
//}