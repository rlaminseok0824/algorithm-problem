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
		//���� coin�� value�� K������ ũ�ٸ� �ε����� ���߰� �ٽ� ����.
		if (K % coin[N - 1] == K) {
			N--;
			continue;
		}
		//result ������ ���� ���� K���� �������� ��������ش�.
		result += (K / coin[N - 1]);
		K = (K % coin[N - 1]);
		N--;
		//K�� 0�� �ȴٸ� �ݺ����� ������.
		if (K == 0) break;
	}
	cout << result << endl;
	return 0;
}