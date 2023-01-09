////https://www.acmicpc.net/problem/12886
//#include<iostream>
//#include<tuple>
//#include <queue>
//using namespace std;
//
//int A, B, C;
//queue<tuple<int, int, int>> q;
//int visited[1001][1001]; //small + small�� �ִ�ġ �� 500 + 500�� �ִ밪
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
//		//A �� B ����
//		if(curA != curB)
//			step(curA > curB ? curB : curA, curA > curB ? curA : curB, curC);
//		//A�� C ����
//		if(curA != curC)
//			step(curA > curC ? curC : curA, curA > curC ? curA : curC, curB);
//		//B�� C ����
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