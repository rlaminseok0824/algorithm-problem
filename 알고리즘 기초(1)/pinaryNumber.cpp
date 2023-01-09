//https://www.acmicpc.net/problem/2193

/*
#include<iostream>
using namespace std;

#define MAXSIZE 91

long long endWith[2][MAXSIZE];


int main() {
	int input;
	cin >> input;

	endWith[1][1] = 1;
	for (int i = 2; i <= input;i++) {
		endWith[0][i] = endWith[0][i - 1] + endWith[1][i - 1];
		endWith[1][i] = endWith[0][i - 1];
	}

	long long ans = endWith[0][input] + endWith[1][input];

	cout << ans;
	return 0;
}
*/