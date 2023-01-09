//////https://www.acmicpc.net/problem/9019
////
////#include<iostream>
////#include<queue>
////#include<deque>
////#include<string>
////#include<memory.h>
////using namespace std;
////
////int testCase;
////int inputNum, goalNum;
////int temp;
////int visited[10000];	
////
////int D(int num) {
////	return (num * 2) % 10000;
////}
////
////int S(int num) {
////	if (num == 1) return 9999;
////	return num - 1;
////}
////
////int L(int num) {
////	return (num % 1000) * 10 + num / 1000;
////}
////
////int R(int num) {
////	return  (num % 10) * 1000 + (num / 10);
////}
////
////
////void bfs() {
////	//queue<pair<int, deque<char>>> q;
////	queue<pair<int, string>> q;
////	//deque<char> q1;
////	//q.push(pair<int,deque<char>>(inputNum,q1));
////	q.push(pair<int, string>(inputNum, ""));
////	visited[inputNum] = true;
////	while (!q.empty()) {
////		int cur = q.front().first;
////		//deque<char> curQ = q.front().second;
////		string currStr = q.front().second;
////		q.pop();
////
////		if (cur == goalNum) {
////			cout << currStr << '\n';
////			return;
////		}
////
////		for (int i = 0; i < 4; i++) {
////			if (i == 0) {
////				temp = D(cur);
////				if (visited[temp]) continue;
////				//curQ.push_back('D');
////				visited[temp] = true;
////				q.push(pair<int, string>(temp, currStr + 'D'));
////			}
////			else if (i == 1) {
////				temp = S(cur);
////				if (visited[temp]) continue;
////				//curQ.push_back('S');
////				visited[temp] = true;
////				q.push(pair<int, string>(temp, currStr + 'S'));
////			}
////			else if (i == 2) {
////				temp = L(cur);
////				if (visited[temp]) continue;
////				//curQ.push_back('L');
////				visited[temp] = true;
////				q.push(pair<int, string>(temp, currStr + 'L'));
////
////			}
////			else if(i == 3) {
////				temp = R(cur);
////				if (visited[temp]) continue;
////				//curQ.push_back('R');
////				visited[temp] = true;
////				q.push(pair<int, string>(temp, currStr + 'R'));
////			}
////			
////
////			//if (temp == goalNum) {
////			//	/*while (!curQ.empty()) {
////			//		cout << curQ.front();
////			//		curQ.pop_front();
////			//	}*/
////			//	cout << '\n';
////			//	return;
////			//}
////			
////			//q.push(pair<int, deque<char>>(temp, curQ));
////			//curQ.pop_back();
////		}
////	}
////}
////
////
////int main() {
////	ios_base::sync_with_stdio(false);
////	cout.tie(NULL);
////	cin.tie(NULL);
////	cin >> testCase;
////	while (testCase != 0) {
////		cin >> inputNum >> goalNum;
////		memset(visited, 0, sizeof(visited));
////		bfs();
////		testCase--;
////	}
////	return 0;
////}
//
//#include<iostream>
//#include<queue>
//#include<string>
//#include<utility>
//#include<memory.h>
//using namespace std;
//
//int testCase;
//int inputNum, goalNum;
//int visited[10000];
//
//int L(int input) {
//	if (input < 1000)
//		return input * 10;
//	else {
//		input *= 10;
//		input += (input / 10000);
//		return input % 10000;
//	}
//}
//
//int R(int num) {
//	if (num < 1000) {
//		int n_num = num % 10;
//		num /= 10;
//		num += (n_num * 1000);
//	}
//	else {
//		int n_num = num / 10;
//		num = (num % 10) * 1000;
//		return n_num + num;
//	}
//}
//
//string bfs() {
//	queue<pair<int, string>> q;
//	q.push(pair<int, string>(inputNum, ""));
//	visited[inputNum] = true;
//	while (!q.empty()) {
//		int cur = q.front().first;
//		string curStr = q.front().second;
//		q.pop();
//
//		int temp = (cur * 2) % 10000;
//		if (temp == goalNum) {
//			return curStr + "D";
//		}
//		else if (!visited[temp]) {
//			visited[temp] = true;
//			q.push(pair<int, string>(temp, curStr + "D"));
//		}
//
//		temp = cur == 0 ? 9999 : cur - 1;
//		if (temp == goalNum) {
//			return curStr + "S";
//		}
//		else if (!visited[temp]) {
//			visited[temp] = true;
//			q.push(pair<int, string>(temp, curStr + "S"));
//		}
//
//		temp = L(cur);
//		if (temp == goalNum) {
//			return curStr + "L";
//		}
//		else if (!visited[temp]) {
//			visited[temp] = true;
//			q.push(pair<int, string>(temp, curStr + "L"));
//		}
//		temp = R(cur);
//		if (temp == goalNum) {
//			return curStr + "R";
//		}
//		else if (!visited[temp]) {
//			visited[temp] = true;
//			q.push(pair<int, string>(temp, curStr + "R"));
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false); cout.tie(NULL); cin.tie(NULL);
//	cin >> testCase;
//	while (testCase != 0) {
//		cin >> inputNum >> goalNum;
//		memset(visited, 0, sizeof(visited));
//		cout << bfs() << '\n';
//		testCase--;
//	}
//	return 0;
//}