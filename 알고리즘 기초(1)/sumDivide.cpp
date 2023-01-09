//https://www.acmicpc.net/problem/2225

/*
#include<iostream>
using namespace std;

#define MAXSIZE	201
#define MAXMOD 1000000000

long long divSum[MAXSIZE][MAXSIZE];
int n, cnt;

int main() {
	cin >> n >> cnt;
	for (int i = 0;i <= n; i++) {
		divSum[1][i] = 1;
	}

	for (int k = 2; k <= cnt;k++) {
		for (int j = 0; j <= n;j++) {
			for (int i = 0; i <= j;i++) {
				divSum[k][j] = (divSum[k][j] + divSum[k - 1][i]) % MAXMOD;
			}
		}
	}

	cout << divSum[cnt][n];
	return 0;
}
*/