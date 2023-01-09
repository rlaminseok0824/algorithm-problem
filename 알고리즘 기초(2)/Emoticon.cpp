////https://www.acmicpc.net/problem/14226
//
//#include<iostream>
//#include<queue>
//#include<utility>
//using namespace std;
//
//int S;
//int visited[1001][1001];
//
//
//void bfs() {
//	queue<pair<int,int>> q;    //처음 : 화면, 두번째 : 클립보드
//	q.push(pair<int, int>(1, 1));
//	visited[1][1] = 1;
//	while (!q.empty()) {
//		int emot = q.front().first;
//		int cb = q.front().second;
//		q.pop();
//		
//		pair<int, int> loop[3] = { make_pair(emot + cb,cb),make_pair(emot,emot),make_pair(emot - 1,cb) };
//		for (int i = 0; i < 3;i++) {
//			int tempS = loop[i].first;
//			int tempC = loop[i].second;
//
//			if (tempS == S) {
//				cout << visited[emot][cb] + 1 << endl;
//				return;
//			}
//			if (tempS < 0 || tempS > 1000 || tempC > 1000) continue;
//			if (!visited[tempS][tempC]) {
//				q.push(pair<int, int>(tempS, tempC));
//				visited[tempS][tempC] = visited[emot][cb] + 1;
//			}
//		}
//		
//			/*if (!visited[emot + cb][cb]) {
//				q.push(pair<int, int>(emot + cb, cb));
//				visited[emot + cb][cb] = visited[emot][cb] + 1;
//			}
//			if (!visited[emot][emot]) {
//				q.push(pair<int, int>(emot, emot));
//				visited[emot][emot] = visited[emot][cb] + 1;
//			}
//			if (emot > 0 && !visited[emot -1][cb]) {
//				q.push(pair<int, int>(emot - 1, cb));
//				visited[emot - 1][cb] = visited[emot][cb] + 1;
//			}*/
//	}
//}
//
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> S;
//	bfs();
//	return 0;
//}