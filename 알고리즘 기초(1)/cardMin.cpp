//https://www.acmicpc.net/problem/16194
/*
#include<iostream>
#include<algorithm>
using namespace std;

#define MAXSIZE 1001

int dp[MAXSIZE];
int cards[MAXSIZE];

int main() {
	int testCase;
	cin >> testCase;
	for (int i = 1; i <= testCase;i++)
		cin >> cards[i];
	
	dp[1] = cards[1];
	for (int i = 1; i <= testCase;i++) {
		dp[i] = 10001;
		for (int j = 1; j <= i; j++) {
			dp[i] = min(dp[i], dp[i - j] + cards[j]);
			cout << dp[i] << endl;
		}
	}
	cout << dp[testCase];
	return 0;
}
*/