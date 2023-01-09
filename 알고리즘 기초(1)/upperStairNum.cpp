//https://www.acmicpc.net/problem/11057

/*
#include<iostream>
using namespace std;

#define MAXSIZE 1001
#define MAXMOD 10007

int upStair[10][MAXSIZE];

int main() {
	int input;
	cin >> input;
	for (int i = 0; i < 10;i++) {
		upStair[i][1] = 1;
	}

	for (int i = 2;i <= input;i++) {
		for (int j = 0;j < 10;j++) {
			for (int k = 9;k >= j ;k--) {
				upStair[j][i] = (upStair[j][i] + upStair[k][i - 1]) % MAXMOD;
			}
		}
	}

	int result = 0;
	for (int i = 0; i < 10;i++) {
		result =  (result + upStair[i][input]) % MAXMOD;
	}
	cout << result;
	return 0;
}
*/