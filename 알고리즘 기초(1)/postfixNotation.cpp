//https://www.acmicpc.net/problem/1935

/*
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	int testCase;
	stack<double> number;
	string formula;

	cin >> testCase;
	cin >> formula;

	int* seq = new int[testCase];

	for (int i = 0; i < testCase;i++) {
		cin >> seq[i];
	}

	for (int i = 0; i < formula.length();i++) {
		if (formula[i] >= 'A' && formula[i] <= 'Z') {
			number.push(seq[formula[i] - 'A']);
		}
		else {
			if (!number.empty()) {
				double temp = number.top();
				number.pop();
				if (formula[i] == '+') {
					temp = number.top() + temp;
				}
				else if (formula[i] == '-') {
					temp = number.top() - temp;
				}
				else if (formula[i] == '*') {
					temp = number.top() * temp;
				}
				else if (formula[i] == '/') {
					temp = number.top() / temp;
				}
				number.pop();
				number.push(temp);
			}
		}
	}
	cout << fixed;
	cout.precision(2);
	cout << number.top() << '\n';
	return 0;
}
*/