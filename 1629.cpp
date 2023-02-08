#include<iostream>
using namespace std;

unsigned long long A, B, C;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> A >> B >> C;

	unsigned long long temp = 1;
	while (B) {
		if ((B & 1) != 0) {
			temp = ((temp *A) % C);
		}
		A = (A * A) % C;
		B = B >> 1;
	}

	cout << (temp % C);
	return 0;
}