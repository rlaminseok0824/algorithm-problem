//https://www.acmicpc.net/problem/13398

/*
#include<iostream>
#include<algorithm>
using namespace std;

#define MAXSIZE 100000

int seq[MAXSIZE];
int contSum[2][MAXSIZE];

int main() {
	int input;
	cin >> input;
	for (int i = 0; i < input; i++) {
		cin >> seq[i];
	}

	contSum[0][0] = seq[0];
	int result = seq[0];
	for (int i = 1; i < input;i++) {
		contSum[0][i] = max(contSum[0][i - 1] + seq[i], seq[i]);
		contSum[1][i] = max(contSum[1][i - 1] + seq[i], contSum[0][i - 1]);
	
		result = max(max(contSum[0][i],contSum[1][i]),result);
	}

	cout << result;
	return 0;
}
*/

/*    ¹Ý·Ê : 1 -99 2 3 -100 4
	if (seq[i] < 0 && temp > seq[i]) {
		contSum[i] = max(contSum[i], contSum[i - 1] + temp);
		temp = seq[i];
	}
	*/