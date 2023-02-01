	#include<iostream>
	#include<algorithm>
	#include<queue>
	using namespace std;
	
	/* Greedy / 시간복잡도 : for문 한 번(N) * pq(logN) => NlogN
		하지만 입력되는 케이스가 많다보니 시간문제가 생길 수 있어 위험하다.
		먼저 입력되는 값을 처음 시작시간표에 정렬을 한 다음
		정렬되어진 것들의 끝나는 시간을 pq에 넣으면서 만약 pq.top()보다 작다면 pq에 넣으면서 
		result의 숫자를 늘리면 된다. 크다면 pq.pop()을 하고 새로 push하여 새롭게 갱신

		priority_queue 사용 중요!!!
	*/




	priority_queue<int,vector<int>,greater<int>> pq;
	int N;
	pair<int, int> classroom[200000];

	bool comp(pair<int, int> a, pair<int, int> b) {
		return a.first < b.first;
	}

	int main() {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		cout.tie(NULL);

		cin >> N;
		for (int i = 0; i < N; i++) {
			cin >> classroom[i].first >> classroom[i].second;
		}

		sort(classroom, classroom + N, comp);

		int result = 1;
		pq.push(classroom[0].second);
		for (int i = 1; i < N; i++) {
			if (pq.top() > classroom[i].first) {
				result++;
				pq.push(classroom[i].second);
			}
			else{
				pq.pop();
				pq.push(classroom[i].second);
			}
		}
		cout << result;
		return 0;
	}