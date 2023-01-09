//https://www.acmicpc.net/problem/17404

#include<iostream>
#include<algorithm>
using namespace std;

#define MAXSIZE 1001
#define MAX 987654321

int house[3][MAXSIZE];
int rgb[3][MAXSIZE];

int main() {
	int input;
	int ans = MAX;
	cin >> input;

	for (int i = 0;i < input;i++) {
		for (int j = 0;j < 3;j++) {
			cin >> house[j][i];
		}
	}
	
	for (int i = 0;i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			if (i == j) rgb[j][0] = house[j][0];
			else rgb[j][0] = MAX;
		}

		for (int l = 1;l < input;l++) {
			rgb[0][l] = house[0][l] + min(rgb[1][l - 1], rgb[2][l - 1]);
			rgb[1][l] = house[1][l] + min(rgb[0][l - 1], rgb[2][l - 1]);
			rgb[2][l] = house[2][l] + min(rgb[1][l - 1], rgb[0][l - 1]);
		}

		for (int k = 0; k < 3; k++)
		{
			if (k == i) continue;
			else ans = min(ans, rgb[k][input - 1]);
		}
	}
	cout << ans;
	return 0;
}