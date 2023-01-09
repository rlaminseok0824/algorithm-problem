//https://www.acmicpc.net/problem/14500

/*
#include<iostream>
#include<algorithm>
using namespace std;

int N, M;
int tetromino[501][501];

int line4(int &col, int &row) {
	int result = 0;
	int cnt = 0;
	if (row + 3 < M) {  //������ 4ĭ
		cnt = tetromino[col][row] + tetromino[col][row + 1] + tetromino[col][row + 2] + tetromino[col][row + 3];
	}
	result = max(result, cnt);

	if (col + 3 < N) { //�Ʒ��� 4ĭ
		cnt = tetromino[col][row] + tetromino[col + 1][row] + tetromino[col + 2][row] + tetromino[col + 3][row];
	}
	result = max(result, cnt);
	return result;
}

int square(int &col, int &row) {
	int result;
	if (col + 1 >= N || row + 1 >= M)
		return 0;
	else {
		result = tetromino[col][row] + tetromino[col + 1][row] + tetromino[col][row + 1] + tetromino[col + 1][row + 1];
		return result;
	}
}

int lineL(int &col, int &row) {
	int result = 0;
	int cnt = 0;
	if (col - 2 >= 0) {  //���� ���� ����
		if (row == 0) {
			cnt = tetromino[col][row] + tetromino[col - 1][row] + tetromino[col - 2][row] + tetromino[col - 2][row + 1];
		}
		else {
			cnt = tetromino[col][row] + tetromino[col - 1][row] + tetromino[col - 2][row] +
				max(tetromino[col - 2][row - 1], tetromino[col - 2][row + 1]); //row �� 0�� �� ���� ���ɼ� o
		}
		
	}
	result = max(result, cnt);

	if (row + 2 < M) {  //���������� ���� ����
		if (col == 0) {
			cnt = tetromino[col][row] + tetromino[col][row + 1] + tetromino[col][row + 2] + tetromino[col + 1][row + 2];
		}
		else {
			cnt = tetromino[col][row] + tetromino[col][row + 1] + tetromino[col][row + 2] +
				max(tetromino[col + 1][row + 2], tetromino[col - 1][row + 2]); //col�� 0�϶� ���� ���ɼ� o
		}
	}
	result = max(result, cnt);

	if (col + 2 < N) { //�Ʒ��� ���� ����
		if (row == 0) {
			cnt = tetromino[col][row] + tetromino[col + 1][row] + tetromino[col + 2][row] + tetromino[col + 2][row + 1];
		}
		else {
			cnt = tetromino[col][row] + tetromino[col + 1][row] + tetromino[col + 2][row] +
				max(tetromino[col + 2][row - 1], tetromino[col + 2][row + 1]);
		}
	}
	result = max(result, cnt);

	if (row - 2 >= 0) {  //�������� ���� ����
		if (col == 0) {
			cnt = tetromino[col][row] + tetromino[col][row - 1] + tetromino[col][row - 2] + tetromino[col + 1][row - 2];
		}
		else {
			cnt = tetromino[col][row] + tetromino[col][row - 1] + tetromino[col][row - 2] +
				max(tetromino[col + 1][row - 2], tetromino[col - 1][row - 2]); //col�� 0�϶� ���� ���ɼ� o
		}
	}
	result = max(result, cnt);
	return result;
}

int lineT(int &col, int &row) {
	int result = 0;
	int cnt = 0;
	if (row + 2 < M) { //����������
		if (col == 0) {
			cnt = tetromino[col][row] + tetromino[col][row + 1] + tetromino[col][row + 2] + tetromino[col + 1][row + 1];
		}
		else {
			cnt = tetromino[col][row] + tetromino[col][row + 1] + tetromino[col][row + 2]
				+ max(tetromino[col - 1][row + 1], tetromino[col + 1][row + 1]);
		}
	}
	result = max(result, cnt);
	if (col + 2 < N) { //�Ʒ���
		if (row == 0) {
			cnt = tetromino[col][row] + tetromino[col + 1][row] + tetromino[col + 2][row] + tetromino[col + 1][row + 1];
		}
		else {
			cnt = tetromino[col][row] + tetromino[col + 1][row] + tetromino[col + 2][row]
				+ max(tetromino[col + 1][row - 1], tetromino[col + 1][row + 1]);
		}
	}
	result = max(result, cnt);
	return result;
}

int lineN(int &col, int &row) {
	int result = 0;
	int cnt = 0;
	if (row + 2 < M && col - 1 >= 0) { //������ �� ����
		cnt = tetromino[col][row] + tetromino[col][row + 1] + tetromino[col - 1][row + 1] + tetromino[col - 1][row + 2];
	}
	result = max(result, cnt);
	if (row + 2 < M && col - 1 < N) { //������ �� �Ʒ���
		cnt = tetromino[col][row] + tetromino[col][row + 1] + tetromino[col + 1][row + 1] + tetromino[col + 1][row + 2];
	}
	result = max(result, cnt);

	if (col + 2 < N && row - 1 >= 0) { //�Ʒ� �� ����
		cnt = tetromino[col][row] + tetromino[col + 1][row] + tetromino[col + 1][row - 1] + tetromino[col + 2][row - 1];
	}
	result = max(result, cnt);
	if (col + 2 < N && row - 1 < M) { //�Ʒ� �� ������
		cnt = tetromino[col][row] + tetromino[col + 1][row] + tetromino[col + 1][row + 1] + tetromino[col + 2][row + 1];
	}
	result = max(result, cnt);
	return result;
}




int main() {
	cin >> N >> M;
	for (int i = 0; i < N;i++) {
		for (int j = 0; j < M;j++) {
			cin >> tetromino[i][j];
		}
	}
	
	int result = 0;
	for (int i = 0; i < N;i++) {
		for (int j = 0; j < M;j++) {
			result = max(result, line4(i, j));
			result = max(result, square(i, j));
			result = max(result, lineL(i, j));
			result = max(result, lineT(i, j));
			result = max(result, lineN(i, j));
		}
	}
	cout << result;
	return 0;
}

*/