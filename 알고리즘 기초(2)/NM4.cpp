//https://www.acmicpc.net/problem/15652

/*
#include<iostream>
using namespace std;

int N, M;
int cnt = 0;
int dfs[8];

int promising(int cnt) {
	for (int i = 0; i < cnt; i++) {
		if (dfs[cnt] < dfs[i])
			return 0;
	}
	return 1;
}

void solve(int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M;i++) {
			cout << dfs[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= N;i++) {
		dfs[cnt] = i;
		if (promising(cnt)) {
			solve(cnt + 1);
			dfs[cnt] = 0;
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N >> M;
	solve(0);
	return 0;
}
*/