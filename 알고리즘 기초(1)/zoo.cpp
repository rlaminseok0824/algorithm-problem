//https://www.acmicpc.net/problem/1309

/*
#include<iostream>
using namespace std;

#define MAXSIZE 100000
#define MAXMOD 9901

int zoo[MAXSIZE]{1,3};

int main() {
	int input;
	cin >> input;
	for (int i = 2;i <= input;i++) {
		zoo[i] = ((2 * zoo[i - 1]) + zoo[i - 2]) % MAXMOD;
	}
	cout << zoo[input];
	return 0;
}
*/