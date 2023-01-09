// https://www.acmicpc.net/problem/10866

/*
#include<iostream>
#include<string>
using namespace std;

#define MAXSIZE 10000

template<typename T>
class deque {
private:
	int front;
	int back;
	int length;
	T* values;
	int setMidIndex;
public:
	deque() {
		setMidIndex = MAXSIZE / 2;
		front = setMidIndex - 1;
		back = setMidIndex;
		length = 0;
		values = new T[MAXSIZE];
	}
	~deque() {
		delete[] values;
	}
	bool empty() {
		if (length == 0)
			return 1;
		else
			return 0;
	}

	void push_front(T input) {
		values[front] = input;
		front--;
		length++;
	}
	void push_back(T input) {
		values[back] = input;
		back++;
		length++;
	}
	void pop_front() {
		if (empty()) {
			cout << -1 << endl;
		}
		else {
			front++;
			cout << values[front] << endl;
			length--;
		}
	}
	void pop_back() {
		if (empty()) {
			cout << -1 << endl;
		}
		else {
			back--;
			cout << values[back] << endl;
			length--;
		}
	}

	int size() {
		return length;
	}

	T Front() {
		if (empty()) return -1;
		else {
			return values[front + 1];
		}
	}

	T Back() {
		if (empty()) return -1;
		else {
			return values[back - 1];
		}
	}
};

int main() {
	int testCase;
	cin >> testCase;
	string inputStr;
	deque<int> dq;
	for (int i = 0; i < testCase; i++) {
		cin >> inputStr;
		if (inputStr == "push_front") {
			int temp;
			cin >> temp;
			dq.push_front(temp);
		}
		else if (inputStr == "push_back") {
			int temp;
			cin >> temp;
			dq.push_back(temp);
		}
		else if (inputStr == "pop_front") {
			dq.pop_front();
		}
		else if (inputStr == "pop_back") {
			dq.pop_back();
		}
		else if (inputStr == "empty") {
			cout << dq.empty() << endl;
		}
		else if (inputStr == "size") {
			cout << dq.size() << endl;
		}
		else if (inputStr == "front") {
			cout << dq.Front() << endl;
		}
		else if (inputStr == "back") {
			cout << dq.Back() << endl;
		}
	}
	return 0;
}

*/