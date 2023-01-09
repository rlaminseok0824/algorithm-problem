//https://www.acmicpc.net/problem/1149
/*
#include<iostream>
#include<algorithm>
using namespace std;

#define MAXSIZE 1000

int input[3][MAXSIZE];
int rgbLength[3][MAXSIZE];

int main() {
	int cnt;
	cin >> cnt;
	for (int i = 0; i < cnt;i++) {
		for (int j = 0;j < 3;j++) {
			cin >> input[j][i];
			if (i == 0)
				rgbLength[j][i] = input[j][i];
		}
	}

	for (int i = 1; i < cnt;i++) {
		rgbLength[0][i] = input[0][i] + min(rgbLength[1][i - 1], rgbLength[2][i - 1]);
		rgbLength[1][i] = input[1][i] + min(rgbLength[0][i - 1], rgbLength[2][i - 1]);
		rgbLength[2][i] = input[2][i] + min(rgbLength[0][i - 1], rgbLength[1][i - 1]);
	}

	cout << min(rgbLength[0][cnt - 1], min(rgbLength[1][cnt - 1], rgbLength[2][cnt - 1]));
	
	return 0;
}
*/