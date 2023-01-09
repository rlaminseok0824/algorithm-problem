//https://www.acmicpc.net/problem/11727

/*
#include<iostream>
using namespace std;

int main() {
	int input;
	cin >> input; //(1 ¡Â n ¡Â 1,000)
	int tile[1000]{ 1,3,0 };
	for (int i = 2; i <= input;i++) {
		tile[i] = (tile[i - 1] + (tile[i - 2] * 2)) % 10007;
	}
	cout << tile[input - 1];
	return 0;
}
*/