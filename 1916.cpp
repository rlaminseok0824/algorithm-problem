#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

/* 다익스트라의 가장 기본적인 문제 / 시간복잡도 : pq를 이용한 다익스트라 : NlogN
	가장 중요한 핵심은 pq의 구현이다. 작은수부터 나오는 pq를 위하여 greater 필요한데 + pair<int,int>를 사용해야함
	=> priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>>
	나머진 bfs로 구현 가능

	가장 기본적인 문제였지만 최솟값을 구하기 위한 d의 초기화를 너무 낮게 설정하여 많이 틀린 문제
	앞으로 INF는 외워두는 것이 좋을 것 같다.
*/


int N, M;
vector<pair<int,int>> maps[100001];
int d[10001];
int from,to;

void bfs() {
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
	d[from] = 0;
	pq.push(pair<int, int>(from, 0));
	

	while (!pq.empty()) {
		int current = pq.top().first;
		int distance = pq.top().second;
		pq.pop();
		
		if (d[current] < distance) continue;
		for (int i = 0; i < maps[current].size(); i++) {
			int next = maps[current][i].first;
			int nextDistance = d[current] + maps[current][i].second;

			if (nextDistance < d[next]) {
				d[next] = nextDistance;
				pq.push(pair<int, int>(next, nextDistance));
			}
		}
	}
	cout << d[to];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	cin >> M;
	int t1, t2, t3;
	for (int i = 0; i < M; i++) {
		cin >> t1 >> t2 >> t3;
		maps[t1].push_back(pair<int,int>(t2,t3));
	}
	cin >> from >> to;

	if (M == 1) {
		cout << t3;
		return 0;
	}

	for (int i = 0; i <= N; i++) {
		d[i] = 9999999999;
	}
	bfs();

	//cout << res;
	return 0;
}