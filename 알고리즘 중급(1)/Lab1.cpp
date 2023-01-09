////https://www.acmicpc.net/problem/14502

//#include<iostream>
//#include<queue>
//#include<utility>
//#include<vector>
//#include<time.h>
//using namespace std;
//
//int N, M;
//int lab[8][8];
//queue<pair<int, int>> q;
//vector<pair<int, int>> init;
//int directionX[4] = { 1,-1,0,0 };
//int directionY[4] = { 0,0,1,-1 };
//int visited[8][8];
//int result = 0;
//
//void findSafe() {
//	int cnt = 0;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (visited[i][j] == 0) cnt++;
//		}
//	}
//	if (cnt > result) result = cnt;
//}
//
//void bfs() {
//	while (!q.empty()) {
//		int y = q.front().first;
//		int x = q.front().second;
//		q.pop();
//
//		for (int i = 0; i < 4; i++) {
//			int nx = x + directionX[i];
//			int ny = y + directionY[i];
//
//			if (nx < 0 || ny < 0 || nx >= M || ny >= N) continue;
//			if (visited[ny][nx]) continue;
//
//			if (lab[ny][nx] == 0) {
//				visited[ny][nx] = true;
//				q.push(pair<int, int>(ny, nx));
//			}
//			else if (lab[ny][nx] == 1)
//				visited[ny][nx] = true;
//		}
//	}
//	findSafe();
//}
//
//void dfs(int cnt) {
//	
//	if (cnt == 3) {
//	/*	for (int i = 0; i < N; i++) {
//			for (int j = 0; j < M; j++) {
//				cout << lab[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;*/
//		copy(&lab[0][0], &lab[0][0] + 64, &visited[0][0]);
//		for (int i = 0; i < init.size(); i++) {
//			q.push(pair<int, int>(init[i].first, init[i].second));
//		}
//		bfs();
//		return;
//	}
//
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			if (lab[i][j] == 0) {
//				lab[i][j] = 1;
//				dfs(cnt + 1);
//				lab[i][j] = 0;
//			}
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
//	cin >> N >> M;
//	int temp;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < M; j++) {
//			cin >> temp;
//			lab[i][j] = temp;
//			if (temp == 2) {
//				init.push_back(pair<int, int>(i, j));
//			}
//		}
//	}
//	dfs(0);
//	cout << result;
//	return 0;
//}