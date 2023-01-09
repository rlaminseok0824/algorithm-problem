//https://www.acmicpc.net/problem/10845
/*
#include<iostream>
#include<string>

#define MAXSIZE 10000
using namespace std;


/// 원형 큐   큐가 maxsize까지 가면 front, back을 다시 0으로 초기화 but 구현 x
template<typename T>
class queue {
private:
	T* values;
	int front;
	int back;
public:
	queue() {
		front = 0;
		back = 0;
		values = new T[MAXSIZE];
	}
	~queue(){
		delete[] values;
	}

	void push(T input) {
		values[back] = input;
		back++;
	}

	void pop() {
		if (empty()) {
			cout << -1 << endl;
		}
		else {
			cout << values[front] << endl;
			front++;
		}
	}

	bool empty() {
		if (back - front == 0)
			return 1;
		else
			return 0;
	}

	int size() {
		return back - front;
	}

	T queueFront() {
		if (empty())
			return -1;
		else
			return values[front];
	}

	T queueBack() {
		if (empty())
			return -1;
		else
			return values[back -1];
	}
};

int main() {
	int testCase;
	cin >> testCase;
	queue<int> q;
	string inputStr;
	for (int i = 0; i < testCase;i++) {
		cin >> inputStr;
		if (inputStr == "push") {
			int temp;
			cin >> temp;
			q.push(temp);
		}
		else if (inputStr == "pop") {
			q.pop();
		}
		else if (inputStr == "empty") {
			cout << q.empty() << endl;
		}
		else if (inputStr == "size") {
			cout << q.size() << endl;
		}
		else if (inputStr == "front") {
			cout << q.queueFront() << endl;
		}
		else if (inputStr == "back") {
			cout << q.queueBack() << endl;
		}
	}
	return 0;
}
*/