#include<iostream>
using namespace std;

int coin[10];
int N, K;
int result = 0;

int main() {
	cin >> N >> K;
	for (int i = 0; i < N; i++) {
		cin >> coin[i];
	}
	while (true) {
		//만약 coin의 value가 K값보다 크다면 인덱스를 낮추고 다시 돈다.
		if (K % coin[N - 1] == K) {
			N--;
			continue;
		}
		//result 값에는 나눈 값과 K에는 나머지를 저장시켜준다.
		result += (K / coin[N - 1]);
		K = (K % coin[N - 1]);
		N--;
		//K가 0이 된다면 반복문을 나간다.
		if (K == 0) break;
	}
	cout << result << endl;
	return 0;
}