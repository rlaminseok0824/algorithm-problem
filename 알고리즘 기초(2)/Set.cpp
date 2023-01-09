////https://www.acmicpc.net/problem/11723
//
//#include<iostream>
//using namespace std;
//
//int M,temp;
//string command;
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> M;
//	int s = 0; //s 는 1 ~ 20까지 나타냄 즉, 0 * 20이고 각 자리의 숫자가 1이면 숫자가 들어갔다는 거임
//	for (int i = 0; i < M;i++) {
//		cin >> command;
//		if (command == "add") {
//			cin >> temp;
//			s = s | (1 << temp); // 1을 오른쪽으로 temp만큼 옮김
//		}
//		else if (command == "remove") {
//			cin >> temp;
//			s = s & ~(1 << temp); //~(1 << temp)와 &을 통해 remove 진행
//		}
//		else if (command == "check") {
//			cin >> temp;
//			int chk = s & (1 << temp);
//			if (chk != 0) cout << 1 << "\n";
//			else cout << 0 << "\n";
//		}
//		else if (command == "toggle") {
//			cin >> temp;
//			s = s ^ (1 << temp);
//		}
//		else if (command == "all") {
//			s = (1 << 21) - 1;
//		}
//		else if(command == "empty") {
//			s = s & 0;
//		}
//	}
//	return 0;
//}