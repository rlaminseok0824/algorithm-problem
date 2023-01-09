//https://www.acmicpc.net/problem/1918
/*
#include<iostream>
#include<stack>
#include<string>
using namespace std;

int priority(char c)
{
	switch (c)
	{
	case '(':
		return 0;
	case '+':
	case '-':
		return 1;
	case '*':
	case '/':
		return 2;
	default:
		break;
	}
}
int main() {
	string formula;
	cin >> formula;
	stack<char> oper;
	for (int i = 0; i < formula.length();i++) {
		if (formula[i] >= 'A' && formula[i] <= 'Z') {
			cout << formula[i];
		}
		else if (formula[i] == '(') {
			oper.push(formula[i]);
		}
		else if (formula[i] == ')') {
			while (oper.top() != '(') {
				cout << oper.top();
				oper.pop();
			}
			oper.pop();
		}
		else {
			while (!oper.empty() && priority(oper.top()) >= priority(formula[i])) {
				cout << oper.top();
				oper.pop();
			}
			oper.push(formula[i]);
		}
	}
	while (!oper.empty())
	{
		cout << oper.top();
		oper.pop();
	}
	cout << '\n';
	return 0;
}
*/