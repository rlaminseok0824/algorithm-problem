////https://www.acmicpc.net/problem/16928
//
//#include<iostream>
//#include<queue>
//using namespace std;
//
//int N, M; // N : 사다리 수, M : 뱀의 수
//int line[101];
//int ladderAndSnake[101];
//queue<int> q;
//
//void bfs() {
//	while (!q.empty()) {
//		int cur = q.front();
//		//cout << "-----" << cur << "---------" << endl;
//		q.pop();
//
//		for (int i = 1; i <= 6; i++) {
//			if (line[cur + i] == -1) {
//				if (line[ladderAndSnake[cur + i]] == 0 || line[ladderAndSnake[cur + i]] < line[cur]) {
//					//cout <<"cur : " << cur << " : " << line[cur] << " : " << cur+i << endl;
//					line[ladderAndSnake[cur + i]] = line[cur] + 1;
//					q.push(ladderAndSnake[cur + i]);
//				}
//			}
//			else if (line[cur + i]) continue;
//			else {
//				line[cur + i] = line[cur] + 1;
//				q.push(cur + i);
//			}
//
//			if (cur + i == 100) {
//				cout << line[100];
//				return;
//			}
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//	cin >> N >> M;
//	int inputA, inputB;
//	for (int i = 0; i < N + M; i++) {
//		cin >> inputA >> inputB;
//		line[inputA] = -1;
//		ladderAndSnake[inputA] = inputB;
//	}
//	q.push(1);
//	bfs();
//	/*for (int i = 1; i <= 100; i++) {
//		cout << i << " : " << line[i] << endl;
//	}*/
//	return 0;
//}