//https://www.acmicpc.net/problem/1158
/*
#include<iostream>
#include<queue>
using namespace std;

int main() {
	int n,k,cnt = 1,temp,size = 0;
	cin >> n >> k;
	queue<int> josephus;
	int* result = new int[n];
	for (int i = 1; i <= n; i++) {
		josephus.push(i);
	}
	while (!josephus.empty()) {
		if (cnt == k) {
			result[size] = josephus.front();
			cnt = 0;
			size++;
		}
		else {
			temp = josephus.front();
			josephus.push(temp);
		}
		josephus.pop();
		cnt++;
	}
	cout << "<";
	for (int i = 0; i < n - 1;i++) {
		cout << result[i] << ", ";
	}
	cout << result[n - 1] << ">" << endl;
	return 0;
}
*/