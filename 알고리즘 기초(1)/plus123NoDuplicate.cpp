//https://www.acmicpc.net/problem/15990

/*
#include<iostream>
using namespace std;

#define MAXSIZE 100001
#define MAXMOD 1000000009

long long dp[3][MAXSIZE] = {
		{0,1,0,1},
		{0,0,1,1},
		{0,0,0,1}
};

int main() {
	int testCase;
	cin >> testCase;
	
	for (int i = 4; i <= MAXSIZE;i++) {
		dp[2][i] = (dp[1][i - 3] + dp[0][i - 3]) % MAXMOD;
		dp[1][i] = (dp[0][i - 2] + dp[2][i - 2]) % MAXMOD;
		dp[0][i] = (dp[2][i - 1] + dp[1][i - 1]) % MAXMOD;
	}

	for (int i = 0; i < testCase;i++) {
		int temp;
		cin >> temp;
		cout << (dp[0][temp] + dp[1][temp] + dp[2][temp]) % MAXMOD << '\n';
	}
	return 0;
}

*/