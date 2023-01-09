//https://www.acmicpc.net/problem/11054

/*
#include<iostream>
#include<algorithm>
using namespace std;

#define MAXSIZE 1000

int seq[MAXSIZE];
int bitonic[2][MAXSIZE];

int main() {
	int input;
	cin >> input;
	for (int i = 0; i < input;i++) {
		cin >> seq[i];
	}

	for (int i = 1; i < input;i++) {
		for (int j = 0;j < i; j++) {
			if (seq[j] < seq[i]) {
				bitonic[0][i] = max(bitonic[0][i], bitonic[0][j] + 1);
			}
		}
	}

	for (int i = input - 1; i >= 0;i--){
		for (int j = input - 1; j >= i;j--) {
			if (seq[j] < seq[i]) {
				bitonic[1][i] = max(bitonic[1][i], bitonic[1][j] + 1);
			}
		}
	}
	
	int result = 0;
	for (int i = 0; i < input;i++) {
		result = max(result, bitonic[0][i] + bitonic[1][i] + 1);
	}
	cout << result;

	return 0;
}
*/