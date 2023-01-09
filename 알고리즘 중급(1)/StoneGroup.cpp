////https://www.acmicpc.net/problem/12886
//#include<iostream>
//#include<tuple>
//#include <queue>
//using namespace std;
//
//int A, B, C;
//queue<tuple<int, int, int>> q;
//int visited[1001][1001]; //small + small의 최대치 즉 500 + 500의 최대값
//
//void step(int small, int big,int other) {
//	if (visited[small][big]) {
//		return;
//	}
//	visited[small][big] = true;
//	q.push(tuple<int, int, int>(small + small, big - small, other));
//	//cout << small + small << " " << big - small << " " << other << endl << endl;
//}
//
//void bfs() {
//	q.push(tuple<int, int, int>(A, B, C));
//	while (!q.empty()) {
//		int curA = get<0>(q.front());
//		int curB = get<1>(q.front());
//		int curC = get<2>(q.front());
//		q.pop();
//
//		if (curA == curB && curB == curC) {
//			cout << 1;	
//			return;
//		}
//
//		//A 와 B 수헹
//		if(curA != curB)
//			step(curA > curB ? curB : curA, curA > curB ? curA : curB, curC);
//		//A와 C 수행
//		if(curA != curC)
//			step(curA > curC ? curC : curA, curA > curC ? curA : curC, curB);
//		//B와 C 수행
//		if(curB != curC)
//			step(curC > curB ? curB : curC, curC > curB ? curC : curB, curA);
//	}
//	cout << 0;
//}
//
//int main() {
//	cin >> A >> B >> C;
//	bfs();
//	return 0;
//}