////https://www.acmicpc.net/problem/2146
//
//#include<iostream>
//#include<queue>
//#include<utility>
//using namespace std;
//
//int N;
//int island[100][100];
//int visitedIsland[100][100];
//int bridge[100][100];
//int directionX[4]{ 1,0,-1,0 };
//int directionY[4]{ 0,1,0,-1 };
//queue<pair<int, int>> edge;
//queue<pair<int, int>> isIsland;
//int result = 987654321;
//int cnt = 0;
//
//void checkEdge(int row,int col) { //각 섬의 끝부분을 생각 후 queue 다 집어넣음
//	if (island[col][row] == 0 || visitedIsland[col][row]) return;
//	cnt++;
//	visitedIsland[col][row] = cnt;
//	isIsland.push(pair<int, int>(row, col));
//
//	while (!isIsland.empty()) {
//		int x = isIsland.front().first;
//		int y = isIsland.front().second;
//		isIsland.pop();
//
//		for (int i = 0; i < 4;i++) {
//			int nx = x + directionX[i];
//			int ny = y + directionY[i];
//			if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
//				
//			if (island[ny][nx] == 1 && !visitedIsland[ny][nx]) {
//				visitedIsland[ny][nx] = cnt;
//				isIsland.push(pair<int, int>(nx, ny));
//			}
//			else if (island[ny][nx] == 0 && !visitedIsland[ny][nx]) {
//				visitedIsland[ny][nx] = cnt;
//				bridge[ny][nx] = 1;
//				edge.push(pair<int, int>(nx, ny));
//			}
//		}
//	}
//}
//
//
//void bfs() {
//	while (!edge.empty()) {
//		int x = edge.front().first;
//		int y = edge.front().second;
//		edge.pop();
//
//		for (int i = 0; i < 4;i++) {
//			int nx = x + directionX[i];
//			int ny = y + directionY[i];
//
//			if (nx < 0 || ny < 0 || nx >= N || ny >= N) continue;
//
//			
//			if (island[ny][nx] == 0 && !visitedIsland[ny][nx]) {
//				visitedIsland[ny][nx] = visitedIsland[y][x];
//				bridge[ny][nx] = bridge[y][x] + 1;
//				edge.push(pair<int, int>(nx, ny));
//			}
//			else if (visitedIsland[ny][nx] && visitedIsland[ny][nx] != visitedIsland[y][x]) {
//				result = min(result,bridge[ny][nx] + bridge[y][x]);
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
//	cin >> N;
//	for (int i = 0; i < N;i++) {
//		for (int j = 0; j < N;j++) {
//			cin >> island[i][j];
//		}
//	}
//
//	for (int i = 0; i < N;i++) {
//		for (int j = 0; j < N;j++) {
//			checkEdge(j,i);
//		}
//	}
//
//	bfs();
//	
//	cout << result;
//
//	return 0;
//}