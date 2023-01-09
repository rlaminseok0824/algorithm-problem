////https://www.acmicpc.net/problem/13460
//
//#include<iostream>
//#include<queue>
//#include<tuple>
//using namespace std;
//
//int N, M;
//char board[10][10];
//int visited[10][10][10][10];	
//queue<tuple<int, int, int, int>> marvel;
//int rM[2], bM[2];  //일단 보류
//int rM_nx, rM_ny, bM_nx, bM_ny;
//int cnt = 0;
//bool rMBlock = false, bMBlock = false;
//bool rMfall = false, bMfall = false;
//int directionX[4] = { 1, -1, 0, 0 };
//int directionY[4] = { 0, 0,1,-1 };
//
//void bfs() {
//	while (!marvel.empty()) {
//		int rM_y = get<0>(marvel.front());
//		int rM_x = get<1>(marvel.front());
//		int bM_y = get<2>(marvel.front());
//		int bM_x = get<3>(marvel.front());
//		marvel.pop();
//		cnt = visited[rM_y][rM_x][bM_y][bM_x];
//
//		if (cnt > 10) {
//			cout << -1;
//			exit(0);
//		}
//		//cout << cnt << endl;
//		//cout << rM_y << " " << rM_x << "   " << bM_y << " " << bM_x << endl;
//
//		for (int i = 0; i < 4; i++) {
//			rM_nx = rM_x, rM_ny = rM_y, bM_nx = bM_x, bM_ny = bM_y;
//			rMBlock = bMBlock = rMfall = bMfall = false;
//			while (!(rMBlock && bMBlock) && !(rMfall && bMBlock) && !bMfall) { 
//				if (!rMBlock && !rMfall) {
//					rM_nx += directionX[i];
//					rM_ny += directionY[i];
//				}
//				if (!bMBlock && !bMfall) {
//					bM_nx += directionX[i];
//					bM_ny += directionY[i];
//					
//				}
//				if (rM_nx == bM_nx && rM_ny == bM_ny && !rMBlock && !rMfall) {
//					rM_nx -= directionX[i];
//					rM_ny -= directionY[i];
//					rMBlock = true;
//				}
//				if (rM_nx == bM_nx && rM_ny == bM_ny && !bMBlock && !bMfall) {
//					if (rMfall) bMfall = true;
//					else {
//						bM_nx -= directionX[i];
//						bM_ny -= directionY[i];
//						bMBlock = true;
//					}
//				}
//				//cout<< "1 : " << rM_ny << " " << rM_nx << "   " << bM_ny << " " << bM_nx << endl;
//
//				if (board[rM_ny][rM_nx] == '#') {
//					rMBlock = true;
//					
//				}
//				else if (board[rM_ny][rM_nx] == 'O') {
//					rMfall = true;
//				}
//
//				if (board[bM_ny][bM_nx] == '#') {
//					bMBlock = true;
//
//				}
//				else if (board[bM_ny][bM_nx] == 'O') {
//					bMfall = true;
//				}
//
//			}
//
//			if (rMBlock && bMBlock && !visited[rM_ny - directionY[i]][rM_nx - directionX[i]][bM_ny - directionY[i]][bM_nx - directionX[i]]) {
//				//cout << "queue push!!" << endl;
//				//cout << "2 : " << rM_ny << " " << rM_nx << "   " << bM_ny << " " << bM_nx << endl;
//				marvel.push(tuple<int, int, int, int>(rM_ny - directionY[i], rM_nx - directionX[i], bM_ny - directionY[i], bM_nx - directionX[i]));
//				visited[rM_ny - directionY[i]][rM_nx - directionX[i]][bM_ny - directionY[i]][bM_nx - directionX[i]] = cnt + 1;
//				continue;
//			}
//			else if (rMfall && bMBlock) {
//				//cout << rM_ny << " " << rM_nx << "   " << bM_ny << " " << bM_nx << endl;
//				cout << cnt << endl;
//				exit(0);
//			}
//			else if (bMfall) {
//				continue;
//			}
//		}
//	}
//	cout << -1;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N >> M;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> board[i][j];
//			if (board[i][j] == 'R') {
//				rM[0] = i; rM[1] = j;
//				board[i][j] = '.';
//			}
//			else if (board[i][j] == 'B') {
//				bM[0] = i; bM[1] = j;
//				board[i][j] = '.';
//			}
//		}
//	}
//
//	marvel.push(tuple<int, int, int, int>(rM[0], rM[1], bM[0], bM[1]));
//	visited[rM[0]][rM[1]][bM[0]][bM[1]] = 1;
//	bfs();
//
//	return 0;
//}