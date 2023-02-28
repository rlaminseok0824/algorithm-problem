#include<iostream>
#include<vector>
#include<queue>
#include<memory.h>
using namespace std;

/* ����-���� �˰��� / �ð����⵵ : N * NM ����?
*  ���ͽ�Ʈ��� ������ ��������� ������ ����ġ�� �����ϱ� ������ ���ͽ�Ʈ��δ� Ǯ �� ���� ���� => ó�� ���� �����̴�.
*  ������ for���� ������ �������μ� ��� �� ���� ������ ������ �ǰԲ� ����� ���̴�. �̸� ���Ͽ� ���� ����� ������δ� ����for���� ���´�.
*  
*  Ǯ�̹��
*  1. ó�� �迭(dist)�� ��� �ִ����� �ʱ�ȭ�Ѵ�.
*  2. ���� �ݺ����� ���鼭 ���� �۾��� ��� �����Ѵ�.
*  3. �̸� N�� �ݺ��Ѵ�. (N�� �ݺ��� �ؾ� ���������� �ּڰ����� ���Ű���)
*  4. ���� ���������� �ѹ� �� ���鼭 ���� ������ �迭 ������ �� �۾����� �ȴٸ� �̴� �ð��� �����ϹǷ� YES�� ����Ѵ�.
* 
*  ������ ���������� ����-���忡�� �־�����������, �̹� ���������� ��� �������� �ð��� �����Ѵٸ� YES�� ������־���Ѵ�.
*  ����, for���� N�� ������ �ٽ� ���� ���̰� ������ �͸� ������ ����Ѵ�.
*/


#define MAX_SIZE (int)1e9

int TC;
int N, M, W;
vector<pair<int, int>> graph[501];
int dist[501];

//void bfs() {
//	for (int i = 1; i <= N; i++) {
//		dist[i] = MAX_SIZE;
//	}
//	queue<pair<int, int>> pq;
//	//priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
//	for (int i = 1; i <= N; i++) {
//		if (graph[i].size() > 0) {
//			pq.push(make_pair(0, i));
//		}
//	}
//	
//	int start = pq.front().second;
//	while (!pq.empty()) {
//		int curr = pq.front().second;
//		int weight = pq.front().first;
//		pq.pop();
//
//		for (auto a : graph[curr]) {
//			if (start == a.first) return;
//			int nextCost = weight + a.second;
//			if (dist[a.first] > nextCost) {
//				dist[a.first] = nextCost;
//				pq.push(make_pair(nextCost, a.first));
//			}
//		}
//	}
//
//	return;
//}

void Bellman() {
	for (int i = 1; i <= N; i++) {   //�ʱⰪ �ʱ�ȭ
		dist[i] = MAX_SIZE;
	}
	
	for (int j = 0; j < N; j++) {     //�� N�� �ݺ�
		for (int i = 1; i <= N; i++) {  //������ �ִ� ���� �ݺ�
			for (auto a : graph[i]) {
				if (dist[a.first] > dist[i] + a.second) {
					dist[a.first] = dist[i] + a.second;
				}
			}
		}
	}
	
	for (int i = 0; i <= N; i++) {    //������ ���� Ȯ��
		for (auto a : graph[i]) {
			if (dist[i] + a.second < dist[a.first]) {
				cout << "YES\n";
				return;
			}
		}
	}

	cout << "NO\n";
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> TC;
	while (TC) {
		cin >> N >> M >> W;
		int s, e, t;
		for (int i = 0; i < M; i++) {
			cin >> s >> e >> t;
			graph[s].push_back(make_pair(e, t));  // ���� �༱�� , �Ÿ�
			graph[e].push_back(make_pair(s, t));  // ���� �༱�� , �Ÿ�
		}

		for (int i = 0; i < W; i++) {
			cin >> s >> e >> t;
			graph[s].push_back(make_pair(e, -t));
		}
		
		Bellman();

		TC--;
		for (int i = 1; i <= N; i++) {
			graph[i].clear();
		}
	}
	return 0;
}