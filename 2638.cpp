#include <iostream>
#include <vector>
#include <queue>
using namespace std;

/* bfs / 시간복잡도 : NlogN(bfs)
	간단한 bfs문제였지만, 외부 공기만의 접촉을 허가하는 조건이 생겨 꽤나 생각을 필요로하는 문제이다.
	하지만 bfs를 외부 (0,0)에서부터 시작하여 치즈의 외부만을 visit로 세어서 없애주면 간단히 해결되는 문제이다.
*/


int N, M;
int cheese[101][101];

int xDir[4] = { 1,-1,0,0 };
int yDir[4] = { 0,0,1,-1 };
vector<pair<int, int>> temp;
queue<pair<int, int>> q;
int visited[101][101];

bool bfs() {
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			visited[i][j] = 0;
		}
	}
	bool flag = false;
	q.push(make_pair(0, 0));
	visited[0][0] = true;
	while (!q.empty()) {
		int nx = q.front().second;
		int ny = q.front().first;
		q.pop();

		for (int i = 0; i < 4; i++) {
			int nnx = nx + xDir[i];
			int nny = ny + yDir[i];
			if (nnx < 0 || nnx >= M || nny < 0 || nny >= N) continue;

			if (cheese[nny][nnx]) {
				visited[nny][nnx]++;
				if (visited[nny][nnx] >= 2) {
					flag = true;
					temp.push_back(make_pair(nny, nnx));
				}
			}
			else if (cheese[nny][nnx] == 0 && !visited[nny][nnx]) {
				visited[nny][nnx]++;
				q.push(make_pair(nny, nnx));
			}
		}
	}
	if (flag) {
		for (auto a : temp) {
			cheese[a.first][a.second] = 0;
		}
		temp.clear();
	}
	return flag;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> cheese[i][j];
		}
	}

	int res = 0;
	while (bfs()) {
		res++;
	}
	cout << res;

	/*int res = 0;
	bool flag = false;
	while (true) {
		flag = false;
		for (int i = 1; i < N - 1; i++) {
			for (int j = 1; j < M - 1; j++) {
				if (cheese[i][j] && find(i, j) >= 2) {
					flag = true;
					temp.push_back(make_pair(i, j));
				}
			}
		}

		if (flag) {
			for (auto a : temp) {
				cheese[a.first][a.second] = 0;
			}
			temp.clear();
			res++;
		}
		else {
			cout << res;
			break;
		}
	}*/
	

	return 0;
}