//https://www.acmicpc.net/problem/1463

/*
#include<iostream>
#include<algorithm>
using namespace std;

#define MAX 1000000

int dp[MAX]{ 0, };

int main() {
	int input;
	cin >> input;

	for (int i = 2;i <= input;i++) {
		dp[i] = dp[i - 1] + 1;
		if (i % 2 == 0)
			dp[i] = min(dp[i], dp[i / 2] + 1);
		if (i % 3 == 0)
			dp[i] = min(dp[i], dp[i / 3] + 1);
	}
	cout << dp[input];
	return 0;
}
*/

/* 동적 프로그래밍에선 꼼수 x, 귀납법으로 식 찾아내서 프로그래밍 할 것
bool consistOf3(int input) {
	int cnt = 1,temp = 0;
	while (temp < input) {
		temp = pow(3, cnt);
		if (temp == input)
			return 1;
		cnt++;
	}
	return 0;
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input, cnt = 0;
	cin >> input;
	while (input != 1) {
		if (consistOf3(input - 1)) {
			cnt++;
			while (input != 1) {
				input /= 3;
				cnt++;
			}
			break;
		}
		else {
			if (input % 3 == 0) {
				input /= 3;
				cnt++;
			}
			else if (input % 2 == 0) {
				input /= 2;
				cnt++;
			}
			else {
				input -= 1;
				cnt++;
			}
		}
	}
	cout << cnt << '\n';
	return 0;
}
*/