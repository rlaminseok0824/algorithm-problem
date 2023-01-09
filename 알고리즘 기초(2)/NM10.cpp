//https://www.acmicpc.net/problem/15664
/*
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int N, M;
int seq[8];
int dfs[8];
bool visited[8];
vector<vector<int>> result;

void solve(int cdx, int cnt) {
	if (cnt == M) {
		vector<int> temp;
		for (int i = 0; i < M;i++) {
			temp.push_back(dfs[i]);
		}
		result.push_back(temp);
		return;
	}

	for (int i = cdx; i < N;i++) {
		if (visited[i]) continue;
		dfs[cnt] = seq[i];
		visited[i] = true;
		solve(i + 1, cnt + 1);
		dfs[cnt] = 0;
		visited[i] = false;
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
	solve(0, 0);
	sort(result.begin(), result.end());
	result.erase(unique(result.begin(), result.end()), result.end()); //unique ����ϸ� �ߺ����� �ڷ� ������ ������ erase�� ����

	for (auto ans : result) {
		for (int i = 0; i < M;i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
	return 0;
}
*/