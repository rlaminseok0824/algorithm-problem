//https://www.acmicpc.net/problem/11052
/*
#include<iostream>
#include <algorithm>
using namespace std;



const int MAX = 1001;
int dp[MAX];
int cards[MAX];

int main() {
	int n;
	cin >> n;

	for (int i = 1;i <= n;i++)
		cin >> cards[i];

	for (int i = 1;i <= n;i++)
		for (int j = 1;j <= i;j++)
			dp[i] = max(dp[i], dp[i - j] + cards[j]);

	cout << dp[n] << endl;

	return 0;
}
*/
/*
int main() {
	int result = 0;
	int testCase;
	cin >> testCase;

	float val[1001]{0,};
	for (int i = 1; i <= testCase;i++) {
		int temp;
		cin >> temp;
		val[i] = float(temp) / i;
	}
	int cnt = testCase;
	while (cnt > 0) {
		float max = 0; 
		int index = 0;
		for (int j = 1; j <= cnt;j++) {
			if (val[j] > max) {
				max = val[j];
				index = j;
			}
		}
		cnt -= index;
		result += (val[index] * index);
	}
	cout << result;
	return 0;
}
*/