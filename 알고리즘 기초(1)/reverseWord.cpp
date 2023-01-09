//acmicpc.net/problem/9093
/*
#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<stack>
using namespace std;
*/

/*                              /////// 1. 스택 사용 x
int main() {
	int testCase;
	vector<string> result;
	string inputStr;
	cin >> testCase;
	cin.ignore();
	for (int i = 0; i < testCase; i++) {
		getline(cin, inputStr);
		int currentIndex = 0, previousIndex = 0;
		while (inputStr.find(" ", previousIndex) != -1) {
			currentIndex = inputStr.find(" ", previousIndex);
			if (currentIndex - previousIndex > 1) {
				reverse(inputStr.begin() + previousIndex, inputStr.begin() + currentIndex);
			}
			previousIndex = currentIndex + 1;
		}
		reverse(inputStr.begin() + previousIndex, inputStr.end());
		result.push_back(inputStr);
	}
	for (int i = 0; i < result.size();i++) {
		cout << result[i] << endl;
	}
	return 0;
}

*/

///////// 2. 스택 사용 o
/*
int main() {               
	int testCase;
	string inputStr;
	stack<char> reverse;
	vector<string> result;
	cin >> testCase;
	cin.ignore();
	for (int i = 0;i < testCase;i++) {
		getline(cin, inputStr);
		inputStr += " ";
		string temp;
		for (int index = 0; index < inputStr.size();index++) {
			if (inputStr[index] == ' ') {
				while (!reverse.empty()) {
					temp += reverse.top();
					reverse.pop();
				}
				temp += " ";
			}
			else {
				reverse.push(inputStr[index]);
			}
		}
		result.push_back(temp);
	}

	for (int i = 0; i < result.size();i++) {
		cout << result[i] << endl;
	}
	return 0;
}
*/