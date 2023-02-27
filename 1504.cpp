#include<iostream>
#include<queue>
#include<vector>
#include<algorithm>
#include<tuple>
#include<memory.h>
using namespace std;

/* ���ͽ�Ʈ�� / �ð����⵵ : NlogN
*  ������ �������� ���� ��������.. ó���� �׳� tuple�� �̿��Ͽ� ��ü ���� �� �߰� ������ ��ģ �͸� ���Ϸ��Ͽ����� �޸� �ʰ�
*  ���� �߰��Ÿ������� �������� ���Ͽ� Ǯ���µ�.. ó���� res�ϳ��� �����ϴ� ������� �ϴ� ���ѷ��� ���� ���� ������ ���Ҵ�...
*  �׷��� dp�� �̿��Ͽ� ���� �����ؼ� dp ������ ũ�� ���� �� �ϴ� ������� �ϰ�.. ����ó���� �� ���Ƽ� ������ ����......
*  �̰��� ���4..?
*/


#define INT_MAX 1e9

int N, E;
vector<pair<int, int>> graph[801];
int mid1, mid2;
int res = INT_MAX;

// 1��. tuple�� �̿��Ͽ� ���Ͽ����� �޸� �ʰ� �߻�...
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
	if (from == to) {    //����ó�� 1.
		return 0;
	}

	for (int i = 1; i <= N; i++) {    //�ʱⰪ �ʱ�ȭ
		dist[i] = INT_MAX;
	}
	priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq; //���ͽ�Ʈ�� �ּҰ��� ���� �켱���� ť   
	pq.push(make_pair(0,from));

	while (!pq.empty()) {
		int curr = pq.top().second;
		int weight = pq.top().first;
		pq.pop();

		if (curr == to) {  //���ϴ� ���� ������ continue
			continue;
		}

		for (auto a : graph[curr]) {
			//cout << a.first << "   " << a.second << endl;
			int cost = weight + a.second;
			if (cost < dist[a.first]) {    //���ͽ�Ʈ�� ����
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