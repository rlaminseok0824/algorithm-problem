//////https://www.acmicpc.net/problem/16940
//
//
//
////방법 1.(틀린 결과, 이유는 모르겠음)
////1.bfs 실행 이후 만약 sequence과의 숫자가 맞지 않으면 queue에 안 넣음
////2. 맞지 않으면 넘어가고 만약 숫자가 맞아 큐에 들가면 반복문을 처음부터 다시 돌림(여기서 시간복잡도 높을 것이라 예상)
////3. 그렇게 나왔을 때 다시 한번 sequence와 비교해서 맞으면 1 틀리면 0
////4. but 틀림
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
////https://astrid-dm.tistory.com/383   //문제 풀이
////https://m.blog.naver.com/ndb796/221227975229  sort 강의
////방법 2. sort를 이용하여 풀기
////1. bfs의 순서를 sort를 이용하여 우선도별로 올림차순으로 정렬한다.
////2. 우선도별로 비교하면서 맞으면 queue 넣고 아니면 그냥 넘어간다.
////3. 그렇게 queue가 비게 된다면 1 아니면 0 출력
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
//bool comp(const int& a, const int& b) {   //sort 내림차순으로 sequence의 숫자로 비교하여 정렬
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