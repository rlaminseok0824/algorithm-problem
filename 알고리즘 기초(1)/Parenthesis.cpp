	// https://www.acmicpc.net/problem/9012
/*
	#include<iostream>
	#include<string>
	#include<stack>
	using namespace std;

	int main() {
		int testCase;
		string inputStr;
		stack<char> set;
		bool checkPair;
		cin >> testCase;
		for (int i = 0;i < testCase;i++) {
			cin >> inputStr;
			for (int j = 0; j < inputStr.size();j++) {
				set.push(inputStr[j]);
			}

			int left = 0, right = 0;

			while (!set.empty()) {
				if (left > right) {
					while (!set.empty()) set.pop();
					break;
				}
				else if (set.top() == ')')
					right++;
				else if (set.top() == '(')
					left++;
			
				set.pop();
				//cout << "right : " << right << endl;
				//cout << "left : " << left << endl;
			}

			if (left == right)
				cout << "YES" << endl;
			else
				cout << "NO" << endl;
		}
		return 0;
	}

*/