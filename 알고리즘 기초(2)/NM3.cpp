//https://www.acmicpc.net/problem/15651
/*
#include<iostream>
using namespace std;

int N, M;
int dp[7];

void dfs(int cdx) {
	if (cdx == M) {
		for (int i = 0; i < M;i++) {
			cout << dp[i] << " ";
		}
		cout << '\n';
		return;
	}

	for (int i = 1; i <= N;i++) {
		//cout << "i = " << i << endl;
		dp[cdx] = i;
			//cout << "append : " << i << endl;
		dfs(cdx + 1);
		dp[cdx] = 0;
			//cout << "popped : " << i << endl;
	}
	return;
}


int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N >> M;
	dfs(0);
}
*/