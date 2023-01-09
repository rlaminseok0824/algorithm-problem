//https://www.acmicpc.net/problem/10972
/*
#include<iostream>
using namespace std;

int N;
int seq[10001];
int visited[10001];
bool flag = false;


int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N;
	for (int i = 0; i < N;i++)
		cin >> seq[i];

	//내림차순이면 -1 출력 구현
	for (int i = N - 1; i >= 1; i--) {
		if (seq[i - 1] < seq[i]) {
			for (int j = 0; j < i - 1;j++) {
				visited[seq[j]] = true;
			}
			seq[i - 1]++;
			while (visited[seq[i - 1]])
				seq[i - 1]++;

			visited[seq[i - 1]] = true;

			for (int k = i; k < N;k++) {
				for (int l = 1; l <= N;l++) {
					if (!visited[l]) {
						seq[k] = l;
						visited[l] = true;
						break;
					}
				}
			}
			flag = true;
		}
		if (flag) break;
	}

	if (flag) {
		for (int i = 0; i < N;i++)
			cout << seq[i] << " ";
	}
	else {
		cout << -1;
	}

	//나머지면 차례대로 계산 구현


	return 0;
}
*/

//dfs로 풀 수 있을줄 알았지만 dfs로 10000의 범위까지는 커버불가능
/*  
int N,temp;
int dfs[10001];
int visited_index[10001];
vector<vector<int>> result;
vector<int> compare;

void permutation(int cnt) {
	if (cnt == N) {
		vector<int> temp_vec;
		for (int i = 0; i < N;i++) {
			temp_vec.push_back(dfs[i]);
		}
		result.push_back(temp_vec);
		return;
	}

	for (int i = 1; i <= N;i++) {
		if (!visited_index[i]) {
			dfs[cnt] = i;
			visited_index[i] = true;
			permutation(cnt + 1);
			dfs[cnt] = 0;
			visited_index[i] = false;
		}
		
	}
	return;
}

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N;
	for (int i = 0; i < N;i++) {
		cin >> temp;
		compare.push_back(temp);
	}

	permutation(0);

	for (int i = 0; i < result.size();i++) {
		if (compare == result[i]) {
			if (i == result.size() - 1) cout << "-1";
			else {
				for (int j = 0; j < N;j++) {
					cout << result[i + 1][j] << " ";
				}
			}
			break;
		}
	}

	return 0;
}
*/