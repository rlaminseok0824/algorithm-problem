//https://www.acmicpc.net/problem/1748

/*
#include<iostream>
using namespace std;

int main() {
	int N;
	cin >> N;
	int result = 0,minus = 9, cnt = 1;
	while (N >= minus) {
		N = N - minus;
		result += minus * cnt;
		minus *= 10;
		cnt++;
	}
	result += N * cnt;

	cout << result;
	return 0;
}
*/