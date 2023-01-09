// https://www.acmicpc.net/problem/1406
/*
#include<iostream>
#include<string>
#include<stack>
using namespace std;

int main() {     //stack 사용
	string inputStr;
	cin >> inputStr;

	stack<char> left, right;
	for (int i = 0; i < inputStr.size();i++) {
		left.push(inputStr[i]);
	}

	int testCase;
	cin >> testCase;

	char input;
	for (int i = 0; i < testCase;i++) {
		cin >> input;
		if (input == 'P') {
			char temp;
			cin >> temp;
			left.push(temp);
		}
		else if (input == 'L') {
			if (left.empty()) continue;
			else {
				right.push(left.top());
				left.pop();
			}
		}
		else if (input == 'D') {
			if (right.empty()) continue;
			else {
				left.push(right.top());
				right.pop();
			}
		}
		else if (input == 'B') {
			if (left.empty()) continue;
			else {
				left.pop();
			}
		}
	}
	while (!left.empty()) {
		right.push(left.top());
		left.pop();
	}
	while (!right.empty()) {
		cout << right.top();
		right.pop();
	}
	return 0;
}
*/
/*  string 함수
int main() {
	string inputStr;
	int testCase,index;
	char input;

	cin >> inputStr;
	cin >> testCase;

	index = inputStr.length();
	for (int i = 0; i < testCase;i++) {
		cin >> input;
		if (input == 'P') {
			string temp;
			cin >> temp;
			inputStr.insert(index, temp);
			index++;
		}
		else if (input == 'L') {
			if (index != 0)
				index--;

		}
		else if (input == 'D') {
			if (index != inputStr.length())
				index++;
		}
		else if (input == 'B') {
			if (index != 0) {
				inputStr.erase(inputStr.begin() + index - 1);
				index--;
			}
		}
	}

	cout << inputStr << endl;

	return 0;
}
*/