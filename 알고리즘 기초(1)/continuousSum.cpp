//https://www.acmicpc.net/problem/1912

/*
#include<iostream>
#include<algorithm>
using namespace std;

#define MAXSIZE 100000

int seq[MAXSIZE];
int contSum[MAXSIZE];


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int length;
	cin >> length;
	
	for (int i = 0; i < length;i++) {
		cin >> seq[i];
	}
	
	contSum[0] = seq[0];
	int ret = seq[0];

	for (int i = 0; i < length;i++) {
		contSum[i] = max(contSum[i - 1] + seq[i], seq[i]);
		ret = max(contSum[i], ret);
	}

	cout << ret;
	return 0;
}
*/