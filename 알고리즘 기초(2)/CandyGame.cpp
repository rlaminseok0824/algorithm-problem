//https://www.acmicpc.net/problem/3085

/*
#include<iostream>
#include<algorithm>
using namespace std;

char board[51][51];
int result = 0;
int N;

void check() {
	char temp;
	for (int i = 0; i < N;i++) {  //행 검사
		int count = 1;
		temp = board[i][0];
		for (int j = 1;j < N;j++) {
			if (board[i][j] == temp)
				count++;
			if (count > result) result = count;
		}
	}

	for (int j = 0; j < N;j++) {
		int count = 1;
		temp = board[0][j];
		for (int i = 1;i < N;i++) {
			if (board[i][j] == temp)
				count++;

			if (count > result) result = count;
		}
	}
}

int main() {
	cin >> N;

	for (int col = 0; col < N;col++) {
		for (int row = 0;row < N;row++) {
			cin >> board[col][row];
		}
	}

	for (int col = 0; col < N;col++) {   //행 바꾸었을 때
		for (int row = 0; row < N - 1;row++) {
			swap(board[col][row], board[col][row + 1]);
			check();
			swap(board[col][row], board[col][row + 1]);
		}
	}

	for (int row = 0; row < N;row++) {   //열 바꾸었을 때
		for (int col = 0; col < N - 1;col++) {
			swap(board[col][row], board[col + 1][row]);
			check();
			swap(board[col][row], board[col + 1][row]);
		}
	}
	cout << result;
	return 0;
}
*/