//https://www.acmicpc.net/problem/15649
/*
#include<iostream>
using namespace std;


int N, M;
int dp[8];
int promising(int index) {
	for (int i = 0;i < index;i++) {
		if (dp[i] == dp[index])
			return 0;
	}
	return 1;
}

void dfs(int cdx) {
	//cout << "dfs called " << endl;

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
		if (promising(cdx)) {
			//cout << "append : " << i << endl;
			dfs(cdx + 1);
			dp[cdx] = 0;
			//cout << "popped : " << i << endl;
		}
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

/*
#include <iostream>
#include <memory.h>
using namespace std;

int n, m, arr[10];
int check[10];

void solve(int pos)
{
	cout << "dfs called " << endl;
	for (int i = 0; i < m;i++) {
		cout << arr[i] << " ";
	}
	cout << endl;
	if (pos == m)
	{
		for (int i = 0;i < m;i++) cout << arr[i] << " ";
		cout << endl;
		return;
	}

	for (int i = 1;i <= n;i++)
	{
		cout << "i = " << i << endl;
		if (check[i] == 0)
		{
			cout << "append : " << i << endl;
			arr[pos] = i;
			check[i] = 1;
			solve(pos + 1);
			arr[pos] = 0;
			check[i] = 0;
			cout << "popped : " << i << endl;
		}
	}

	return;
}

int main()
{
	cin >> n >> m;

	solve(0);
}
*/