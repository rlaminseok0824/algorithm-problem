//https://www.acmicpc.net/problem/2133

/*
#include<iostream>
using namespace std;

#define MAXSIZE 30

int tile[MAXSIZE]{1,3};

int main() {
	int input;
	cin >> input;
	if (input % 2 != 0)
		cout << 0;
	else {
		for (int i = 2;i < input;i++) {
			if (i % 2 != 0) {
				tile[i] = 2 * tile[i - 1] + tile[i - 2];
			}
			else { //���� Ȧ���� ���� ������ 0�� ���;� ������ Ȧ��ĭ -1 �� ����� �� ����
				tile[i] = tile[i - 1] + tile[i - 2];
			}
			cout << tile[i] << endl;
		}

		cout << tile[input - 1];
	}

	return 0;
}
*/