//https://www.acmicpc.net/problem/11726
/*
#include<iostream>
using namespace std;

int main() {
	int input;
	cin >> input; // (1 ¡Â n ¡Â 1,000)
	int tile[1000]{ 1,2,3,0 };
	for (int i = 3; i <= input;i++) {
		tile[i] = (tile[i - 1] + tile[i - 2]) % 10007;
	}
	cout << tile[input - 1] << endl;
	return 0;
}
*/