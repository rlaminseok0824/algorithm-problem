//https://www.acmicpc.net/problem/15988

/*
#include<iostream>
using namespace std;

#define MAXMOD 1000000009
#define MAXSIZE 1000001

long long plusOTT[MAXSIZE]{0,1,2,4};

int main() {
	int testCase;
	cin >> testCase;
	for (int i = 4;i <= MAXSIZE;i++) {
		plusOTT[i] = (plusOTT[i - 1] + plusOTT[i - 2] + plusOTT[i - 3]) % MAXMOD;
	}
	for (int i = 0;i < testCase;i++) {
		int temp;
		cin >> temp;
		cout << plusOTT[temp] << '\n';
	}
	return 0;
}
*/