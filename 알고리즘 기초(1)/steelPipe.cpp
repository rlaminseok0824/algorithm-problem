// https://www.acmicpc.net/problem/10799

/*
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {
	string inputStr;
	cin >> inputStr;
	stack<char> steelPipe;
	int cntPipe = 0, result = 0;
	for (int i = 0; i < inputStr.size();i++) {
		steelPipe.push(inputStr[i]);
	}
	while (!steelPipe.empty()) {
		if (steelPipe.top() == ')') {
			steelPipe.pop();
			if (steelPipe.top() == '(') {
				result += cntPipe;
				steelPipe.pop();
			}
			else {
				cntPipe++;
			}
		}
		else {
			steelPipe.pop();
			cntPipe--;
			result++;
		}
	}
	cout << result << endl;
	return 0;
}

*/


/*  스택 사용 x
int main() {
	string inputStr;
	cin >> inputStr;
	int cntPipe = 0, result = 0;
	for (int i = 0; i < inputStr.size();i++) {
		if (inputStr[i] == '(' && inputStr.at(i + 1) == ')') {
			result += cntPipe;
			i++;
		}
		else if (inputStr[i] == ')') {
			cntPipe--;
			result++;
		}
		else {
			cntPipe++;
		}
	}
	cout << result << endl;
	return 0;
}
*/