#include<iostream>
#include<queue>
using namespace std;

/* bfs
* 아주아주 간단한 bfs 문제이지만 10e9 이기 때문에 자료형에 유의하여 long long을 사용하여 풀면 아주 간단하게 해결된다.!
*/

long long A, B;
queue<pair<long long,long long>> q;

int main() {
	cin >> A >> B;

	if (A == B) {
		cout << 1;
		return 0;
	}
	q.push(pair<long long,long long > (A, 1));
	while (!q.empty()) {
		long long curr = q.front().first;
		long long cnt = q.front().second;
		q.pop();
		if (curr * 2 == B || curr * 10 + 1 == B) {
			cout << cnt + 1;
			return 0;
		}

		if (curr * 2 < B) {
			q.push(pair<long long,long long>(curr * 2,cnt + 1));
		}
		if (curr * 10 + 1 < B) {
			q.push(pair<long long,long long>(curr * 10 + 1,cnt + 1));
		}
	}
	cout << -1;
	return 0;
}