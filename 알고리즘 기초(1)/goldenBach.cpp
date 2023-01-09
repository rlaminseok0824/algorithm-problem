//https://www.acmicpc.net/problem/10820

/*
#include<iostream>
using namespace std;

#define MAX 1000000

int primeArr[MAX] = { 1,1,1,0,};

void primeChk() {
	for (int i = 2; i * i <= MAX; i++) {
		if (primeArr[i] == 0) {
			for (int j = i * i; j <= MAX; j += i) {
				primeArr[j] = 1;
			}
		}
	}
}

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	primeChk();
	int inputNum = -1;

	while (inputNum != 0) {
		cin >> inputNum;
		bool prime = true;
		for (int i = 3; i <= inputNum;i += 2) {
			if (primeArr[i] == 0 && primeArr[inputNum-i] == 0) {
				cout << inputNum << " = " << i << " + " << inputNum - i << '\n';
				prime = false;
				break;
			}
		}
		if (prime && inputNum != 0) {
			cout << "Goldbach's conjecture is wrong." << endl;
		}
	}
	return 0;
}
*/