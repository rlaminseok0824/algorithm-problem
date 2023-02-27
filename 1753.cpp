#include<iostream>
#include<vector>
#include<queue>
using namespace std;

/* 다익스트라 / 시간복잡도: NlogN
* 이전에 계속 다익스트라 문제를 풀어봤기에 익숙한 문제
* 문제 내용대로 하나하나씩 한다면 시간초과가 날 것 같았다. 따라서 dp와 같이 사용하여
* 모든 노드들의 길이를 갱신하면 쉽게 구할 수 있다.
* 
* 이제는 pq 사용법에 대해서 조금 익숙해진 것 같다. 특히 greater 부분에 comp로 자신이 원하는 부분을 넣을 수 있다는 점도 깨달았다.
* 다익스트라는 pq + bfs 조합으로 푸는게 제일 좋은 것 같다.

*/


int V, E;
int from;
vector<pair<int, int>> graph[20001];
int dist[20001];

void bfs(int start) {
	for (int i = 1; i <= V; i++) {
		dist[i] = 1e9;
	}
	priority_queue <pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
	pq.push(make_pair(0, start)); //first = weight , second = curr

	while (!pq.empty()) {
		int curr = pq.top().second;
		int weight = pq.top().first;
		pq.pop();

		for (auto a : graph[curr]) {
			int nextCost = weight + a.second;
			if (dist[a.first] > nextCost) {
				dist[a.first] = nextCost;
				pq.push(make_pair(dist[a.first], a.first));
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> V >> E;
	cin >> from;
	int u, v, w;
	for (int i = 0; i < E; i++) {
		cin >> u >> v >> w;
		graph[u].push_back(make_pair(v, w)); 
	}
	
	bfs(from);
	for (int i = 1; i <= V; i++) {
		if (i == from) {
			cout << 0 << '\n';
		}
		else {
			if (dist[i] == 1e9) {
				cout << "INF" << '\n';
			}
			else {
				cout << dist[i] << '\n';
			}
		}
	}

	return 0;
}