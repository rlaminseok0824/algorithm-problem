#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

/* ���ͽ�Ʈ�� // �ð����⵵ : A -> X�� ã�� ��� N * M logN + X -> A ���ư��� ��� : 2 * NM logN : �̰� �ð��� �����ɸ��� �����ΰ�..?
* �׻� ����ġ�� ������ ���ͽ�Ʈ�� �ǽ��ؾ��Ѵ�. ���ͽ�Ʈ�� ������ �����ϸ� �� bfs�� �����ϴ°� ���ƺ��δ�.
* �������� ���ͽ�Ʈ��� pq�� ����ϴ� �� ��Ծ���;;(�ͼ����� �ʾƼ�) ������ 1Ʈ���� �����ߴٴ°� �߿��� �� ����.
*  bfs�� �̿��Ͽ� Ư�� A���� X������ �ִܱ��̸� ���ϰ� ���� X���� ��� ��α����� �ִܰŸ��� ���Ѵ��� �ű⼭ max���� ���Ѵ�.
* 
* ���ͽ�Ʈ��� pq�� �̿��� ��..!! ����� ����
*/


int N, M, X;
vector<pair<int, int>> roads[1001];
int weights[1001];


int bfs(int start,int end) {
	queue<pair<int,int>> q;
	int res = 1e9;
	for (auto a : roads[start])
		q.push(a);
	
	while (!q.empty()) {
		int curr = q.front().first;
		int weight = q.front().second;
		q.pop();

		if (curr == end) {
			res = min(weight,res);
			continue;
		}

		if (weight > res) {   //���ͽ�Ʈ���� �ٽ�
			continue;
		}

		for (auto a : roads[curr]) {
			q.push(make_pair(a.first, weight + a.second));
		}
	}

	return res;
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M >> X; 
	int t1,t2,t3;
	for (int i = 0; i < M; i++) {
		cin >> t1 >> t2 >> t3;
		roads[t1].push_back(pair<int, int>(t2, t3)); // left: dst / right : weight
	}

	for (int i = 1; i <= N; i++) {
		if (i == X) continue;
		weights[i] = bfs(i, X);
	}

	for (int i = 1; i <= N; i++) {
		if (i == X) continue;
		weights[i] += bfs(X, i);
	}

	int result = 0;
	for (int i = 1; i <= N; i++) {
		result = max(result, weights[i]);
	}
	cout << result;

	return 0;
}