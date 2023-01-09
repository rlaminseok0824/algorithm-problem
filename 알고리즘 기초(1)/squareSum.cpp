// https://www.acmicpc.net/problem/1699
// 케이스를 나누어서 잘 파악한 후 풀어보기

/*
#include<iostream>
#include<cmath>
using namespace std;

#define MAXSIZE 100000
#define min(a,b) a < b ? a : b
int sqrSum[MAXSIZE];

int main() {
	int input;
	cin >> input;

	int cnt = 1;
	for (int i = 1; i <= input;i++) {
		sqrSum[i] = i;
		for (int j = 1; j * j <= i;j++) {
			sqrSum[i] = min(sqrSum[i], sqrSum[i - j * j] + 1);
		}
	}
	cout << sqrSum[input];
	return 0;
}
*/