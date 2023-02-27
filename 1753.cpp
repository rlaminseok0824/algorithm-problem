#include<iostream>
#include<vector>
#include<queue>
using namespace std;

/* ���ͽ�Ʈ�� / �ð����⵵: NlogN
* ������ ��� ���ͽ�Ʈ�� ������ Ǯ��ñ⿡ �ͼ��� ����
* ���� ������ �ϳ��ϳ��� �Ѵٸ� �ð��ʰ��� �� �� ���Ҵ�. ���� dp�� ���� ����Ͽ�
* ��� ������ ���̸� �����ϸ� ���� ���� �� �ִ�.
* 
* ������ pq ������ ���ؼ� ���� �ͼ����� �� ����. Ư�� greater �κп� comp�� �ڽ��� ���ϴ� �κ��� ���� �� �ִٴ� ���� ���޾Ҵ�.
* ���ͽ�Ʈ��� pq + bfs �������� Ǫ�°� ���� ���� �� ����.

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