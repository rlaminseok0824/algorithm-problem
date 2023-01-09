#include<iostream>
using namespace std;

int N, M;
char shelf[51][51];
bool cntX = false;

int indexA_X[6] = { 0,1,1,1,1,0 };
int indexA_Y[6] = { 0,0,1,2,3,3 };


bool inputA(int x,int y) {
	for (int i = 1; i < 6; i++) {
		int nx = x + indexA_X[i];
		int ny = y + indexA_Y[i];

		if (nx >= N || ny >= M) return false;

		if (shelf[nx][ny] != 'X') {
			return false;
		}
	}

	for (int i = 0; i < 6; i++) {
		shelf[x + indexA_X[i]][y + indexA_Y[i]] = 'A';
	}
	return true;
}

bool inputB(int x, int y) {
	if (shelf[x][y] == 'X' && shelf[x][y + 1] == 'X') {
		for (int i = 0; i < 2; i++) {
			shelf[x][y + i] = 'B';
		}
		return true;
	}
	return false;
}

int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N >> M;
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> shelf[i][j];
			if (shelf[i][j] != '.') cntX = true;
		}
	}
	if (cntX == false) {	
		cout << -1;
		return 0;
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (shelf[i][j] == 'X' && !inputA(i, j) && !inputB(i, j)) {
				cout << -1;
				return 0;
			}
		}
	}
11
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cout << shelf[i][j];
		}
		cout << '\n';
	}
	return 0;
}