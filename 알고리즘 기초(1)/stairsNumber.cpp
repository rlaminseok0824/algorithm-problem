//https://www.acmicpc.net/problem/10844

/*
#include<iostream>
using namespace std;

#define MAXSIZE 101
#define MAXMOD 1000000000

int stairs[10][MAXSIZE]; 

int main() {
	int input;
	cin >> input;

	for (int i = 1;i <= 9;i++) {
		stairs[i][1] = 1;
	}
	
	for (int j = 2;j <= input;j++) {
		for (int i = 0; i <= 9; i++) {
			if (i == 0)
				stairs[i][j] = stairs[i + 1][j - 1] % MAXMOD;
			else if (i == 9)
				stairs[i][j] = stairs[i - 1][j - 1] % MAXMOD;
			else
				stairs[i][j] = (stairs[i - 1][j - 1] + stairs[i + 1][j - 1]) % MAXMOD;
		}
	}

	int result=0;
	for (int i = 0; i < 10;i++) {
		result = (result + stairs[i][input]) % MAXMOD;  //에러부분 += 쓰면 result 안 포함 overflow 발생
	}

	cout << result % MAXMOD;
	return 0;
}

*/