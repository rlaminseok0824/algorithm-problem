//https://www.acmicpc.net/problem/2133

/*
#include<iostream>
using namespace std;

#define MAXSIZE 30

int tile[MAXSIZE]{1,3};

int main() {
	int input;
	cin >> input;
	if (input % 2 != 0)
		cout << 0;
	else {
		for (int i = 2;i < input;i++) {
			if (i % 2 != 0) {
				tile[i] = 2 * tile[i - 1] + tile[i - 2];
			}
			else { //원래 홀수가 나온 값에는 0이 나와야 하지만 홀수칸 -1 을 계산한 값 저장
				tile[i] = tile[i - 1] + tile[i - 2];
			}
			cout << tile[i] << endl;
		}

		cout << tile[input - 1];
	}

	return 0;
}
*/