////https://www.acmicpc.net/problem/1707
//
//#include<iostream>
//#include<vector>
//#include<queue>
//#include<memory.h>
//using namespace std;
//
///*
//int testCase;
//int V, E;
//vector<vector<int>> graph;
//int visited[2001];
//bool isBipartite = false;
//int cnt = 0;
//vector<string> result;
//
//void bfs(int current,int remove) {
//	cout << "currebt : " << current << "remove : " << remove << endl;
//	if (visited[current]) return;
//
//	cnt++;
//	queue<int> q;
//	q.push(current);
//	if(current != remove)
//		visited[current] = true;
//	while (!q.empty()) {
//		int node = q.front();
//		q.pop();
//		for (int i = 0; i < graph[node].size();i++) {
//			int next = graph[node][i];
//			if (visited[next] || next == remove) continue;
//			visited[next] = true;
//			q.push(next);
//		}
//	}
//
//	for (int i = 1; i <= V;i++) {
//		cout << visited[i] << " ";
//	}
//	cout << endl;
//}
//
//*/
//
//
////https://hongjw1938.tistory.com/117
////1. ���� Ž�� ������ ������ ������ ���������� ĥ�Ѵ�.(���� 1�� ǥ��)
////2. ���� ������ ���� ������ ������ �Ķ������� ĥ�Ѵ�.(���� - 1�� ǥ��)
////3. �ش� ���� �������� ���ʷ� Ž���� �����ϸ� �ڽŰ� ������ ������ ���������� ĥ�Ѵ�.(���� 1�� ǥ��)
////4. �̿� ���� ����� Ž���� �����ϸ� �ݺ��Ͽ� 2���� �������� ��� ĥ�Ѵ�.
////5. ������ ĥ�ϴٰ� �̿� ������ ���� ������ ĥ���� �ִٸ� �̺� �׷����� �� �� ����.
//
//int testCase;
//int V, E;
//vector<int> graph[20001];
//int color[20001];
//bool isNotBipartite = false;
//vector<string> result;
//
//void bipartiteBfs(int current) {
//	if (color[current] != 0) return;
//	queue<int> q;
//	q.push(current);
//	color[current] = 1;     //1
//	while (!q.empty()) {
//		int node = q.front();
//		q.pop();
//		for (int i = 0; i < graph[node].size();i++) {
//			int next = graph[node][i];
//			if (color[next] == color[node]) {
//				isNotBipartite = true;
//				return; 
//			}
//			if (!color[next] == 0) continue;
//			color[next] = -1 * color[node];  //2 //3
//			q.push(next);
//		}
//	}
//	isNotBipartite = false;
//	return;
//}
//
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> testCase;
//
//	for (int i = 0; i < testCase;i++) {
//		cin >> V >> E;
//		
//		for (int i = 1; i <= V;i++) {
//			graph[i].clear();
//		}
//
//		int nodeA, nodeB;
//		for (int i = 1; i <= E;i++) {
//			cin >> nodeA >> nodeB;
//			graph[nodeA].push_back(nodeB);
//			graph[nodeB].push_back(nodeA);
//		}
//
//		memset(color, 0, sizeof(color));
//		for (int i = 1; i <= V;i++) {
//			bipartiteBfs(i);
//			if (isNotBipartite) break;
//		}
//
//
//		if (isNotBipartite) result.push_back("NO");
//		else { result.push_back("YES"); }
//	}
//
//	for (int i = 0; i < testCase;i++) {
//		cout << result[i] << "\n";
//	}
//	return 0;
//}