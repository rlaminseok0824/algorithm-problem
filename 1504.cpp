#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<tuple>
#include<memory.h>
using namespace std;

/* 다익스트라 / 시간복잡도 : NlogN
*  굉장히 유쾌하지 못한 문제였다.. 처음에 그냥 tuple을 이용하여 전체 구간 중 중간 구간을 거친 것만 구하려하였더니 메모리 초과
*  따라서 중간거리까지를 순간순간 구하여 풀었는데.. 처음에 res하나에 적용하는 방식으로 하니 무한루프 돌고 등의 오류가 많았다...
*  그래서 dp를 이용하여 값을 저장해서 dp 값보다 크면 적용 안 하는 방식으로 하고.. 예외처리가 좀 많아서 난해한 문제......
*  이것이 골드4..?
*/


#define INT_MAX 1e9

int N, E;
vector<pair<int, int>> graph[801];
int mid1, mid2;
int res = INT_MAX;

// 1안. tuple을 이용하여 구하였지만 메모리 초과 발생...
//int bfs() {
//	//priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>> pq;
//	queue<tuple<int,int,bool,bool>> pq;
//	pq.push(make_tuple(1,0,false,false));
//
//	while (!pq.empty()) {
//		int curr = get<0>(pq.front());
//		int weight = get<1>(pq.front());
//		bool m1 = get<2>(pq.front());
//		bool m2 = get<3>(pq.front());
//		pq.pop();
//
//		if (curr == N && m1 && m2) {
//			//cout << curr << "  " << weight << endl;
//			res = min(res, weight);
//			continue;
//		}
//		else if(res < weight) {
//			continue;
//		}
//
//		for (auto a : graph[curr]) {
//			if (a.first == mid1)
//				pq.push(make_tuple(a.first, weight + a.second, true, m2));
//			else if (a.first == mid2)
//				pq.push(make_tuple(a.first, weight + a.second, m1, true));
//			else
//				pq.push(make_tuple(a.first, weight + a.second, m1, m2));
//		}
//	}
//	
//	if (res == 999999999) {
//		return -1;
//	}
//	else {
//		return res;
//	}
//}

//2.

int dist[801];
int bfs(int from, int to) {
	if (from == to) {    //예외처리 1.
		return 0;
	}

	for (int i = 1; i <= N; i++) {    //초기값 초기화
		dist[i] = INT_MAX;
	}
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; //다익스트라 최소값을 위해 우선순위 큐   
	pq.push(make_pair(0,from));

	while (!pq.empty()) {
		int curr = pq.top().second;
		int weight = pq.top().first;
		pq.pop();

		if (curr == to) {  //원하는 지점 나오면 continue
			continue;
		}

		for (auto a : graph[curr]) {
			//cout << a.first << "   " << a.second << endl;
			int cost = weight + a.second;
			if (cost < dist[a.first]) {    //다익스트라 조건
				dist[a.first] = cost;
				pq.push(make_pair(dist[a.first], a.first));
			}
		}
	}
	//cout << "end" << endl;
	return dist[to];
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> E;
	int t1, t2,t3;
	for (int i = 0; i < E; i++) {
		cin >> t1 >> t2 >> t3;
		graph[t1].push_back(make_pair(t2, t3));
		graph[t2].push_back(make_pair(t1, t3));
	}
	cin >> mid1 >> mid2;
	
	int rootTom1 = bfs(1, mid1);
	int rootTom2 = bfs(1, mid2);
	//cout << rootTom1 << "  " << rootTom2 << endl;

	int m1Tom2 = bfs(mid1, mid2);
	int m2Tom1 = bfs(mid2, mid1);
	//cout << m1Tom2 << "  " << m2Tom1 << endl;

	int m1ToDst = bfs(mid1, N);
	int m2ToDst = bfs(mid2, N);
	//cout << m1ToDst << "  " << m2ToDst << endl;
	
	int ans1, ans2;
	ans1 = ans2 = INT_MAX;
	if(rootTom1 != INT_MAX && m1Tom2 != INT_MAX && m2ToDst != INT_MAX)
		ans1 = rootTom1 + m1Tom2 + m2ToDst;
	if (rootTom2 != INT_MAX && m2Tom1 != INT_MAX && m1ToDst != INT_MAX)
		ans2 = rootTom2 + m2Tom1 + m1ToDst;

	int ans = min(ans1, ans2);
	if (ans == INT_MAX) {
		cout << -1;
		return 0;
	}
	cout << ans;
	//cout << bfs();
	return 0;
}