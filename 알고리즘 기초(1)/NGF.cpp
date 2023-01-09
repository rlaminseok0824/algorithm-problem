// https://www.acmicpc.net/problem/17299

/*
#include<iostream>
#include<stack>
using namespace std;

int main() {
	ios_base::sync_with_stdio(0); 
	cin.tie(0);
	int input;
	cin >> input;

	stack<int> ngf;
	int* result = new int[input];
	int* seq = new int[input];
	int* cnt = new int[input] {0,};
	for (int i = 0; i < input;i++) {
		cin >> seq[i];
		cnt[seq[i] - 1]++;
	}
	for (int i = input - 1; i >= 0;i--) {
		
		while (!ngf.empty() && cnt[ngf.top() - 1] <= cnt[seq[i] - 1]) {
			ngf.pop();
		}

		if (ngf.empty()) result[i] = -1;
		else {
			result[i] = ngf.top();
		}

		ngf.push(seq[i]);
	}
	for (int i = 0; i < input;i++)
		cout << result[i] << " ";

	return 0;
}
*/