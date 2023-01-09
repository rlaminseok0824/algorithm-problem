//////https://www.acmicpc.net/problem/16940
//
//
//
////��� 1.(Ʋ�� ���, ������ �𸣰���)
////1.bfs ���� ���� ���� sequence���� ���ڰ� ���� ������ queue�� �� ����
////2. ���� ������ �Ѿ�� ���� ���ڰ� �¾� ť�� �鰡�� �ݺ����� ó������ �ٽ� ����(���⼭ �ð����⵵ ���� ���̶� ����)
////3. �׷��� ������ �� �ٽ� �ѹ� sequence�� ���ؼ� ������ 1 Ʋ���� 0
////4. but Ʋ��
//
////#include<iostream>
////#include<vector>
////#include<queue>
////using namespace std;
////
////int N;
////vector<int> graph[100001];
////int sequence[100001];
////int visited[100001];
////int cnt = 1;
////bool flag = false;
////
////
////void bfs() {
////	if (sequence[1] != 1) {
////		flag = true;
////		return;
////	}
////
////	queue<int> q;
////	visited[1] = cnt;
////	cnt++;
////	q.push(1);
////
////	while (!q.empty()) {
////		/*for (int i = 1; i <= N;i++) {
////			cout << visited[i] << " ";
////		}
////		cout << endl;*/
////		int x = q.front();
////		q.pop();
////
////		for (int i = 0; i < graph[x].size();i++) {
////			int y = graph[x][i];
////			//cout << "y : " << y << endl;
////			if (visited[y]) continue;
////			visited[y] = cnt;
////			if (sequence[y] != visited[y]) {
////				//cout << "it's not!!" << endl;
////				visited[y] = 0;
////			}
////			else if(sequence[y] == visited[y]){
////				//cout << "I'm in!!" << endl;
////				q.push(y);
////				cnt++;
////				i = -1;
////			}
////		}
////	}
////	return;
////}
////
////int main() {
////	ios_base::sync_with_stdio(false);
////	cout.tie(NULL);
////	cin.tie(NULL);
////
////	cin >> N;
////	int nodeA, nodeB;
////	for (int i = 0; i < N - 1;i++) {
////		cin >> nodeA >> nodeB;
////		graph[nodeA].push_back(nodeB);
////		graph[nodeB].push_back(nodeA);
////	}
////	for (int i = 1;i <= N;i++) {
////		cin >> sequence[i];
////	}
////
////	bfs();
////
////	for (int i = 1; i <= N;i++) {
////		if (visited[i] != sequence[i]) {
////			flag = true;
////			break;
////		}
////	}
////
////	if (flag) cout << 0;
////	else {
////		cout << 1;
////	}
////
////	return 0;
////}
//
//
////https://astrid-dm.tistory.com/383   //���� Ǯ��
////https://m.blog.naver.com/ndb796/221227975229  sort ����
////��� 2. sort�� �̿��Ͽ� Ǯ��
////1. bfs�� ������ sort�� �̿��Ͽ� �켱������ �ø��������� �����Ѵ�.
////2. �켱������ ���ϸ鼭 ������ queue �ְ� �ƴϸ� �׳� �Ѿ��.
////3. �׷��� queue�� ��� �ȴٸ� 1 �ƴϸ� 0 ���
//
//
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<algorithm>
//using namespace std;
//
//#define MAX_SIZE 100001
//
//int N;
//vector<int> graph[MAX_SIZE];
//int sequence[MAX_SIZE];
//queue<int> order;
//
//bool comp(const int& a, const int& b) {   //sort ������������ sequence�� ���ڷ� ���Ͽ� ����
//	return sequence[a] < sequence[b];
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N;
//	int nodeA, nodeB;
//	for (int i = 0; i < N - 1;i++) {
//		cin >> nodeA >> nodeB;
//		graph[nodeA].push_back(nodeB);
//		graph[nodeB].push_back(nodeA);
//	}
//	int temp;
//	for (int i = 1; i <= N;i++) {
//		cin >> temp;
//		sequence[temp] = i;
//		order.push(temp);
//	}
//	for (int i = 1;i <= N;i++) {
//		sort(graph[i].begin(), graph[i].end(), comp);
//	}
//
//	if (order.front() != 1) {
//		cout << "0" << "\n";
//		return 0;
//	}
//	else {
//		queue<int> q;
//		q.push(1);
//		order.pop();
//		while (!q.empty()) {
//			int node = q.front();
//			q.pop();
//			for (int i = 0; i < graph[node].size();i++) {
//				int next = graph[node][i];
//				if (next == order.front()) {
//					q.push(order.front());
//					order.pop();
//					if (order.empty()) { 
//						cout << "1\n";
//						return 0;
//					}
//				}
//			}
//		}
//	}
//	
//	cout << "0\n";
//	return 0;
//}