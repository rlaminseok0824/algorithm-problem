//https://www.acmicpc.net/problem/15655

/*
#include<iostream>
#include<algorithm>
using namespace std;

int N, M;
int seq[8];
int dfs[8];
bool visited[10000];

void solve(int cdx,int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M;i++) {
			cout << dfs[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = cdx; i < N;i++) {
		if (!visited[seq[i]]) {
			dfs[cnt] = seq[i];
			visited[seq[i]] = true;
			solve(i+ 1,cnt + 1);
			dfs[cnt] = 0;
			visited[seq[i]] = false;
		}
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N;i++) {
		cin >> seq[i];
	}
	sort(seq, seq + N);
	solve(0,0);

	return 0;
}
*/