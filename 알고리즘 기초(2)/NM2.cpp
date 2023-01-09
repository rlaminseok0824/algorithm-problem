//https://www.acmicpc.net/problem/15650

/*
#include<iostream>
#include<algorithm>
using namespace std;

int N, M;
int dfs[8];
bool visited[8];

void solve(int cdx,int cnt) {
	if (cnt == M) {
		for (int i = 0; i < M;i++) {
			cout << dfs[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = cdx; i <= N;i++) {
		if (!visited[i]) {
			visited[i] = true;
			dfs[cnt] = i;
			solve(i + 1, cnt + 1);
			visited[i] = false;
		}
	}

	return;
}


int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N >> M;
	solve(1,0);
	return 0;
}
*/