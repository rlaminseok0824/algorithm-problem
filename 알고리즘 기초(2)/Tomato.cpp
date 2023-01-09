////https://www.acmicpc.net/problem/7576
//
//처음 썼을 때의 방법(시간초과)
//이차원 배열을 돌면서 1이 나오면 bfs 수행 칸마다 +1 진행 
//다음 1이 나오면 새로 bfs 수행하면서 서로 만나는 숫자가 겹치는 곳까지 진행
//하지만 반복문을 많이 돌기때문에 시간초과 뜸
//결론은 간편한 것이 아닌 반복문을 줄여 시간복잡도를 줄이는 것
// -> 1인 것을 전부 찾고 한번에 bfs로 돌림

//#include<iostream>
//#include<queue>
//#include<utility>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int M, N;
//int tomato[1002][1002];
//vector<pair<int, int>> ripeIndex;
//int x, y;
//int directionX[4]{ 1,0,-1,0 };
//int directionY[4]{ 0,1,0,-1 };
//int result = 0;
//bool impossible = false;
//
//void bfs() {
//	queue<pair<int, int>> q;
//	for (int i = 0; i < ripeIndex.size();i++) {
//		q.push(pair<int, int>(ripeIndex[i].first, ripeIndex[i].second));
//	}
//
//	while (!q.empty()) {
//		/*for (int i = 1; i <= N;i++) {
//			for (int j = 1; j <= M;j++) {
//				cout << tomato[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;*/
//		y = q.front().first;
//		x = q.front().second;
//		q.pop();
//		for (int i = 0; i <= 3;i++) {
//			if (x == M && i == 0) continue;
//			if (x == 1 && i == 2) continue;
//			if (y == 1 && i == 3) continue;
//			if (y == N && i == 1) continue;
//
//			int nx = x + directionX[i];
//			int ny = y + directionY[i];
//
//			if (tomato[ny][nx] == 0) {
//				tomato[ny][nx] = tomato[y][x] + 1;
//				q.push(pair<int, int>(ny, nx));
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
//	cin >> M >> N;
//
//	for (int col = 1; col <= N;col++) {   //입력
//		for (int row = 1; row <= M; row++)
//			cin >> tomato[col][row];
//	}
//
//	for (int col = 1; col <= N; col++) {   //토마토 익은 것의 인덱스 찾음
//		for (int row = 1; row <= M;row++) {
//			if (tomato[col][row] == 1) ripeIndex.push_back(pair<int, int>(col,row));
//		}
//	}
//
//	bfs();   //bfs를 사용
//	
//	for (int col = 1; col <= N;col++) {   //다 찾은 후 0이 있는지와 일수 계산
//		for (int row = 1; row <= M; row++) {
//			if (tomato[col][row] == 0) {
//				impossible = true;
//				break;
//			}
//			result = max(result, tomato[col][row]);
//		}
//	}
//
//	if (impossible) cout << -1;
//	else {
//		cout << result - 1;
//	}
//
//	return 0;
//}