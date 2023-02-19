#include<iostream>
#include<algorithm>
#include<vector>
#include<queue>
using namespace std;

/* 다익스트라 // 시간복잡도 : A -> X를 찾는 방법 N * M logN + X -> A 돌아가는 방법 : 2 * NM logN : 이게 시간이 오래걸리는 이유인가..?
* 항상 가중치가 나오면 다익스트라를 의심해야한다. 다익스트라 구현은 웬만하면 난 bfs로 구현하는게 좋아보인다.
* 오랜만의 다익스트라라 pq를 사용하는 걸 까먹었다;;(익숙하지 않아서) 하지만 1트만에 성공했다는게 중요한 것 같다.
*  bfs를 이용하여 특정 A에서 X까지의 최단길이를 구하고 다음 X에서 모든 경로까지의 최단거리를 구한다음 거기서 max값을 구한다.
* 
* 다익스트라는 pq를 이용할 것..!! 까먹지 말자
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

		if (weight > res) {   //다익스트라의 핵심
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