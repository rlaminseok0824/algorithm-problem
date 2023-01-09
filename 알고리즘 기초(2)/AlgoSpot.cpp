////https://www.acmicpc.net/problem/1261
//
//#include<iostream>
//#include<queue>
//#include<utility>
//using namespace std;
//
//#define MAXSIZE 101
//
//int N, M;
//char maze[MAXSIZE][MAXSIZE];
//int visited[MAXSIZE][MAXSIZE];
//int directionRow[4] = { 1,0,-1,0 };
//int directionCol[4] = { 0,1,0,-1 };
//
//
//void bfs() {
//	queue<pair<int,int>> q;
//	q.push(pair<int, int>(1, 1));
//	visited[1][1] = 1;
//	while (!q.empty()) {
//		/*for (int i = 1;i <= N;i++) {
//			for (int j = 1; j <= M;j++) {
//				cout <<  visited[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;*/
//		int row = q.front().first;
//		int col = q.front().second;
//		q.pop();
//
//		for (int i = 0;i < 4;i++) {
//			int nrow = row + directionRow[i];
//			int ncol = col + directionCol[i];
//
//			if (nrow < 1 || ncol < 1 || nrow > M || ncol > N) continue;
//
//			if (!visited[ncol][nrow]) {
//				if (maze[ncol][nrow] == '1')
//					visited[ncol][nrow] = visited[col][row] + 1;
//				else
//					visited[ncol][nrow] = visited[col][row];
//				q.push(pair<int, int>(nrow, ncol));
//			}
//			else if (maze[ncol][nrow] == '0' && visited[ncol][nrow] > visited[col][row]) {
//				visited[ncol][nrow] = visited[col][row];
//				q.push(pair<int, int>(nrow, ncol));
//			}
//			else if (maze[ncol][nrow] == '1' && visited[ncol][nrow] > visited[col][row] + 1) {
//				visited[ncol][nrow] = visited[col][row] + 1;
//				q.push(pair<int, int>(nrow, ncol));
//			}
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//	cin >> M >> N;
//	for (int i = 1;i <= N;i++) {
//		for (int j = 1; j <= M;j++) {
//			cin >> maze[i][j];
//		}
//	}
//	
//	bfs();
//
//	cout << visited[N][M] - 1;
//
//	return 0;
//}