//https://www.acmicpc.net/problem/1874
/*
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

int main() {
	int length;
	cin >> length;
	stack<int> sequence;
	vector<char> result;
	int input, cnt = 1;
	for (int loop = 0; loop < length;loop++) {
		cin >> input;

		while (cnt <= input) {
			sequence.push(cnt);
			result.push_back('+');
			cnt++;
		}

		if (sequence.top() == input) {
			sequence.pop();
			result.push_back('-');
		}
		else {
			result.clear();
			break;
		}
	}
	if (result.empty()) {
		cout << "NO" << endl;
	}
	else {
		for (int i = 0; i < result.size();i++) {
			cout << result[i] << endl;
		}
	}
	

	*/
	/*
	for (int loop = 0; loop < length;loop++) {
		cin >> input;
		
		if (index - input >= 2 && cnt < length) {
			cout << "NO" << endl;
			break;
		}
		else if (index == 0 || input > index) {
			while (cnt != input + 1) {
				sequence.push(cnt);
				cout << "+" << endl;
				cnt++;
				cout << "cnt : " << cnt << endl;
			}
			sequence.pop();
			cout << "-" << endl;
			index = input;
			previous = input;
			cout << "index : " << index << endl;
		}
		else if (input > previous && cnt > length) {
			cout << "NO" << endl;
			break;
		}
		else {
			previous = input;
			sequence.pop();
			cout << "-" << endl;
		}
		
	}
	*/
	/*
	cin >> input
	for (cnt;cnt <= input;cnt++) {
		sequence.push(cnt);
		cout << "+" << endl;
	}
	sequence.pop();
	cout << "-" << endl;
	cnt--;
	index = cnt;
	cout << "cnt : " << cnt << endl;
	while (!sequence.empty()) {
		cin >> input;
		if (input > index) {
			while (cnt != input) {
				sequence.push(cnt);
				cout << "+" << endl;
				cnt++;
				cout << "cnt : " << cnt << endl;
			}
			sequence.pop();
			cout << "-" << endl;
			index = input;
		}
		else  {
			sequence.pop();
			cout << "-" << endl;
		}
	}
	*/


//	return 0;
//}
