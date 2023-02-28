#include<iostream>
#include<vector>
#include<queue>
#include<memory.h>
using namespace std;

/* 벨만-포드 알고리즘 / 시간복잡도 : N * NM 정도?
*  다익스트라와 유형이 비슷하지만 음수의 가중치가 존재하기 떄문에 다익스트라로는 풀 수 없는 유형 => 처음 보는 유형이다.
*  문제는 for문을 여러번 돌림으로서 계속 더 작은 것으로 갱신이 되게끔 만드는 것이다. 이를 위하여 내가 만드는 방식으로는 삼중for문이 나온다.
*  
*  풀이방법
*  1. 처음 배열(dist)를 모드 최댓값으로 초기화한다.
*  2. 이후 반복문을 돌면서 값이 작아질 경우 갱신한다.
*  3. 이를 N번 반복한다. (N번 반복을 해야 최종적으로 최솟값으로 갱신가능)
*  4. 이후 마지막으로 한번 더 돌면서 만약 원래의 배열 값보다 더 작아지게 된다면 이는 시간이 역행하므로 YES를 출력한다.
* 
*  원래는 시작지점이 벨만-포드에서 주어져야하지만, 이번 문제에서는 어느 점에서도 시간이 역행한다면 YES를 출력해주어야한다.
*  따라서, for문을 N번 돌리고 다시 값의 차이가 음수인 것만 정답을 출력한다.
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
	for (int i = 1; i <= N; i++) {   //초기값 초기화
		dist[i] = MAX_SIZE;
	}
	
	for (int j = 0; j < N; j++) {     //총 N번 반복
		for (int i = 1; i <= N; i++) {  //간선이 있는 벡터 반복
			for (auto a : graph[i]) {
				if (dist[a.first] > dist[i] + a.second) {
					dist[a.first] = dist[i] + a.second;
				}
			}
		}
	}
	
	for (int i = 0; i <= N; i++) {    //마지막 최종 확인
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
			graph[s].push_back(make_pair(e, t));  // 다음 행선지 , 거리
			graph[e].push_back(make_pair(s, t));  // 다음 행선지 , 거리
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