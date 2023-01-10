//https://www.acmicpc.net/problem/11399

#include<iostream>
#include<algorithm>
using namespace std;

int N, people[1001],result = 0;

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> people[i];
	}

	sort(people, people + N);

	int sum = 0;
	for (int i = 0; i < N; i++) {
		sum += people[i];
		result += sum;
	}
	cout << result << endl;
	return 0;
}