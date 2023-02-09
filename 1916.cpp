#include<iostream>
#include<vector>
#include<queue>
#include<algorithm>
using namespace std;

/* ���ͽ�Ʈ���� ���� �⺻���� ���� / �ð����⵵ : pq�� �̿��� ���ͽ�Ʈ�� : NlogN
	���� �߿��� �ٽ��� pq�� �����̴�. ���������� ������ pq�� ���Ͽ� greater �ʿ��ѵ� + pair<int,int>�� ����ؾ���
	=> priority_queue<pair<int, int>, vector<pair<int, int>>, greater<>>
	������ bfs�� ���� ����

	���� �⺻���� ���������� �ּڰ��� ���ϱ� ���� d�� �ʱ�ȭ�� �ʹ� ���� �����Ͽ� ���� Ʋ�� ����
	������ INF�� �ܿ��δ� ���� ���� �� ����.
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