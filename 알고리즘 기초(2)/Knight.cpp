////https://www.acmicpc.net/problem/7562
//
//#include<iostream>
//#include<queue>     //bfs
//#include<utility>   //pair
//#include<memory.h>  //memset
//using namespace std;
//
//int testCase;
//int l;
//int chess[300][300];
//int startRow, startCol;
//int endRow, endCol;
//int x, y;
//int directionX[8]{1,2,2,1,-1,-2,-2,-1};
//int directionY[8]{-2,-1,1,2,2,1,-1,-2};
//
//
//void bfs(int row, int col) {
//	queue<pair<int, int>> q;
//	chess[col][row] = 1;
//	q.push(pair<int, int>(row, col));
//	while (!q.empty()) {
//		x = q.front().first;
//		y = q.front().second;
//		q.pop();
//
//		for (int i = 0; i < 8;i++) {
//			int nx = x + directionX[i];
//			int ny = y + directionY[i];
//			if (nx < 0 || ny < 0 || nx >= l || ny >= l) continue;
//			else if (chess[ny][nx] == 0) {
//				chess[ny][nx] = chess[y][x] + 1;
//				q.push(pair<int, int>(nx, ny));
//			}
//
//			if (nx == endRow && ny == endCol) return;
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> testCase;
//	for (int i = 0; i < testCase;i++) {
//		cin >> l;
//		cin >> startRow >> startCol;
//		cin >> endRow >> endCol;
//
//		for (int i = 0; i < 300; i++){
//			memset(chess[i], 0, sizeof(chess[i]));
//		}
//
//		bfs(startRow, startCol);
//
//		cout << chess[endCol][endRow] - 1 << '\n';
//	}
//	return 0;
//}