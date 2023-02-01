	#include<iostream>
	#include<algorithm>
	#include<queue>
	using namespace std;
	
	/* Greedy / �ð����⵵ : for�� �� ��(N) * pq(logN) => NlogN
		������ �ԷµǴ� ���̽��� ���ٺ��� �ð������� ���� �� �־� �����ϴ�.
		���� �ԷµǴ� ���� ó�� ���۽ð�ǥ�� ������ �� ����
		���ĵǾ��� �͵��� ������ �ð��� pq�� �����鼭 ���� pq.top()���� �۴ٸ� pq�� �����鼭 
		result�� ���ڸ� �ø��� �ȴ�. ũ�ٸ� pq.pop()�� �ϰ� ���� push�Ͽ� ���Ӱ� ����

		priority_queue ��� �߿�!!!
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