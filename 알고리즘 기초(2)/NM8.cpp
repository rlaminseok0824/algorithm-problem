//https://www.acmicpc.net/problem/15657
/*
#include<iostream>
#include<algorithm>
using namespace std;

int N, M;
int seq[8];
int dfs[8];

int promising(int cnt) {
	for (int i = 0; i < cnt; i++) {
		if (dfs[cnt] < dfs[i])
			return 0;
	}
	return 1;
}

void solve(int cdx) {
	if (cdx == M) {
		for (int i = 0; i < M;i++) {
			cout << dfs[i] << " ";
		}
		cout << "\n";
		return;
	}

	for (int i = 0; i < N;i++) {
		dfs[cdx] = seq[i];
		if (promising(cdx)) {
			solve(cdx + 1);
			dfs[cdx] = 0;
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
	solve(0);

	return 0;
}
*/