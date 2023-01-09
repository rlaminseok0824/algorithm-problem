//https://www.acmicpc.net/problem/15666
/*
#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;

int N, M;
int seq[8];
int dfs[8];
int visited_index[8];
vector<vector<int>> result;
//int visited[10000];
//int previous[8];

int promising(int cnt) {
	for (int i = 0; i < cnt; i++) {
		if (dfs[cnt] < dfs[i])
			return 0;
	}
	return 1;
}

void solve(int cnt) {
	if (cnt == M) {
		vector<int> temp;
		for (int i = 0; i < M;i++) {
			temp.push_back(dfs[i]);
		}
		result.push_back(temp);
		return;
	}

	for (int i = 0; i < N;i++) {
		dfs[cnt] = seq[i];
		if (promising(cnt)) {
			solve(cnt + 1);
			dfs[cnt] = 0;
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
	sort(result.begin(), result.end());
	result.erase(unique(result.begin(), result.end()), result.end()); //unique 사용하면 중복값을 뒤로 보내기 때문에 erase로 지움


	for (auto ans : result) {
		for (int i = 0; i < M;i++) {
			cout << ans[i] << " ";
		}
		cout << "\n";
	}
}
*/