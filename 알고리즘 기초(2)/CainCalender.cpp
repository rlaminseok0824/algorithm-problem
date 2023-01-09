//https://www.acmicpc.net/problem/6064

/*
#include<iostream>
using namespace std;

int main() {
	int testCase;
	int M, N, x, y;
	cin >> testCase;
	int* calender = new int[testCase];

	for (int i = 0; i < testCase;i++) {
		cin >> M >> N >> x >> y;
		bool flag = true;
		int temp;
		for (int j = 0; j < 40000;j++) {
			temp = (M * j + x) % N;
			if(N == y && temp == 0){
				calender[i] = (M * j + x);
				flag = false;
				break;
			}
			if (temp == y) {
				calender[i] = (M * j + x);
				flag = false;
				break;
			}
		}

		if(flag)
			calender[i] = -1;
	}
	for (int i = 0;i < testCase;i++) {
		cout << calender[i] << endl;
	}
	return 0;
}
*/