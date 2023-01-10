//https://www.acmicpc.net/problem/2138

#include<iostream>
using namespace std;

int N;
char lights[100001], lightS[100001];
char result[100001];

void paint(char* lights, int i) {
	if (i == 0) {
		lights[i] = (lights[i] == '0' ? '1' : '0');
		lights[i + 1] = (lights[i + 1] == '0' ? '1' : '0');
	}
	else if (i == N - 1) {
		lights[i] = (lights[i] == '0' ? '1' : '0');
		lights[i - 1] = (lights[i - 1] == '0' ? '1' : '0');
	}
	else {
		lights[i] = (lights[i] == '0' ? '1' : '0');
		lights[i + 1] = (lights[i + 1] == '0' ? '1' : '0');
		lights[i - 1] = (lights[i - 1] == '0' ? '1' : '0');
	}
}


int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> lights[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> result[i];
	}
	for (int i = 0; i < N; i++) {
		lightS[i] = lights[i];
	}
	paint(lightS, 0);
	int ans = 0;
	int ans2 = 1;
	for (int i = 1; i < N; i++) {
		if (lights[i - 1] != result[i - 1]) {
			paint(lights, i);
			ans++;
		}

		if (lightS[i - 1] != result[i - 1]) {
			paint(lightS, i);
			ans2++;
		}
	}

	bool isAnswer = true;
	for (int i = 0; i < N; i++) {
		if (lights[i] != result[i]) {
			isAnswer = false;
			break;
		}
	}
	
	if (isAnswer) {
		cout << ans;
		return 0;
	}
	else {
		isAnswer = true;
		for (int i = 0; i < N; i++) {
			if (lightS[i] != result[i]) {
				isAnswer = false;
				break;
			}
		}

		if (isAnswer) {
			cout << ans2;
		}
		else {
			cout << -1;
		}
	}

	return 0;
}