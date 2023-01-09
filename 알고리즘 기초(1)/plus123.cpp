//https://www.acmicpc.net/problem/9095

/*
#include<iostream>
using namespace std;

int main() {
	int testCase;
	cin >> testCase;
	int arr[11]{ 1,2,4,0 };
	for (int i = 0;i < testCase;i++) {
		int temp;
		cin >> temp;
		for (int j = 3; j <= temp;j++) {
			arr[j] = arr[j - 1] + arr[j - 2] + arr[j - 3];
		}
		cout << arr[temp - 1] << '\n';
	}
	return 0;
}
*/