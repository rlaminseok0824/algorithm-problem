//////https://www.acmicpc.net/problem/2206
////
////#include<iostream>
////#include<queue>
////#include<tuple>
////using namespace std;
////
////#define MAXSIZE 1000
////
////int N, M;
////char map[MAXSIZE][MAXSIZE];
////int visited[MAXSIZE][MAXSIZE][2];
////queue<tuple<int, int, int>> q;
////int directionX[4] = { 1,-1,0,0 };
////int directionY[4] = { 0,0,1,-1 };
////
////void bfs() {
////	q.push(make_tuple(0, 0, 0));
////	visited[0][0][0] = 1;
////	visited[0][0][1] = 1;
////	while (!q.empty()) {
////		int x = get<0>(q.front());
////		int y = get<1>(q.front());
////		bool isBroken = get<2>(q.front());
////		q.pop();
////
////		/*for (int i = 0; i < N; i++) {
////			for (int j = 0; j < M; j++) {
////				cout << visited[i][j][isBroken] << " ";
////			}
////			cout << endl;
////		}
////		cout << endl;*/
////
////		if (x == M - 1 && y == N - 1) {
////			cout << visited[y][x][isBroken];
////			return;
////		}
////		for (int i = 0; i < 4; i++) { //0은 x + 1, 1은 x -1, 2는 y + 1,3은 y - 1
////			int nx = x + directionX[i];
////			int ny = y + directionY[i];
////
////			if (nx < 0 || ny < 0 || nx >= M || ny >= N) continue;
////
////
////			if (map[ny][nx] == '1' && !isBroken) {
////				visited[ny][nx][1] = visited[y][x][0] + 1;
////				q.push(make_tuple(nx, ny, true));
////			}
////			else if (map[ny][nx] == '0' && visited[ny][nx][isBroken] == 0) {
////				visited[ny][nx][isBroken] = visited[y][x][isBroken] + 1;
////				q.push(make_tuple(nx, ny, isBroken));
////			}
////		}
////	}
////	cout << -1;
////}
////
////
////int main() {
////	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
////
////	cin >> N >> M;
////	for (int i = 0; i < N; i++) {
////		for (int j = 0; j < M; j++) {
////			cin >> map[i][j];
////		}
////	}
////
////	if (N == 1 && M == 1) {
////		cout << 1;
////		return 0;
////	}
////	bfs();
////	return 0;
////}
//
//#include<iostream>
//using namespace std;
//
//void call_by_value(int a, int b) {
//	int temp = a;
//	a = b;
//	b = a;
//}
//
//void call_by_reference(int* a, int* b) {
//	int temp = *a;
//	//cout << temp << endl;
//	*a = *b;
//	*b = temp;
//}
//
//
////포인터 선언 시 * 사용, + 주소값을 불러올 때도 사용
////& : 값의 주소 부를 때 사용
//int main() {
//	int a, b;
//	a = 3, b = 5;
//	
//	call_by_reference(&a, &b);
//	cout << "a : " << a << "b : " << b << endl;
//	return 0;
//}