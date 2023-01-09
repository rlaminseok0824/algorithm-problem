//https://www.acmicpc.net/problem/2309

/*
#include<iostream>
#include<algorithm>
using namespace std;

int dwarves[9];

int main() {
	int sum = 0;
	for (int i = 0;i < 9; i++) {
		cin >> dwarves[i];
		sum += dwarves[i];
	}

	sort(dwarves, dwarves + 9);

	int a, b;
	for (int i = 0;i < 9;i++) {
		for (int j = i + 1;j < 9;j++) {
			if (sum - (dwarves[i] + dwarves[j]) == 100) {
				a = i;
				b = j;
				break;
			}
		}
	}
	
	for (int i = 0; i < 9; i++) {
		if (i == a || i == b)
			continue;
		cout << dwarves[i] << endl;
	}
	return 0;
}
*/