// https://www.acmicpc.net/problem/17298
// Áß¿ä! 

/*
#include<iostream>
#include<stack>
using namespace std;

int main() {
	int inputNum;
	cin >> inputNum;

	stack<int> nge;
	int* seq = new int[inputNum];
	int* result = new int[inputNum];
	for (int i = 0; i < inputNum;i++) {
		cin >> seq[i];
	}

	for(int i = (inputNum - 1); i >= 0;i--) {
		while (!nge.empty() && nge.top() <= seq[i])
			nge.pop();

		if (nge.empty()) result[i] = -1;
		else {
			result[i] = nge.top();
		}
		
		nge.push(seq[i]);
	}

	for (int i = 0; i < inputNum;i++)
		cout << result[i] << " ";
	return 0;
}
*/