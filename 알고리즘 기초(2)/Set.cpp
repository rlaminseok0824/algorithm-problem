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
//	int s = 0; //s �� 1 ~ 20���� ��Ÿ�� ��, 0 * 20�̰� �� �ڸ��� ���ڰ� 1�̸� ���ڰ� ���ٴ� ����
//	for (int i = 0; i < M;i++) {
//		cin >> command;
//		if (command == "add") {
//			cin >> temp;
//			s = s | (1 << temp); // 1�� ���������� temp��ŭ �ű�
//		}
//		else if (command == "remove") {
//			cin >> temp;
//			s = s & ~(1 << temp); //~(1 << temp)�� &�� ���� remove ����
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