//https://www.acmicpc.net/problem/1080

#include<iostream>
using namespace std;

int N, M,cnt = 0;
int matrix1[50][50];
int matrix2[50][50];

void color33(int i, int j) {
	for (int a = i; a < i + 3; a++) {
		for (int b = j; b < j + 3; b++) {
			matrix2[a][b] = ((matrix2[a][b] == 1) ? 0 : 1);
		}
	}
}

int main() {
	cin >> N >> M;

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf_s("%1d", &matrix1[i][j]);
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			scanf_s("%1d", &matrix2[i][j]);
		}
	}

	if (N < 3 || M < 3) {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (matrix1[i][j] != matrix2[i][j]) {
					cout << -1;
					return 0;
				}
			}
		}
		cout << 0;
		return 0;
	}

	for (int i = 0; i < N - 2; i++) {
		for (int j = 0; j < M - 2; j++) {
			if (matrix1[i][j] != matrix2[i][j]) {
				color33(i, j);
				cnt++;
			}
		}
	}

	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			if (matrix1[i][j] != matrix2[i][j]) {
				cout << -1;
				return 0;
			}
		}
	}

	cout << cnt;
	return 0;
}