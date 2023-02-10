#include<iostream>
using namespace std;

/*  ������ dp ���� / �ð����⵵ : N + N = N
*  ������ Ǯ�̹���� ���������� �� ������ �ٽ��� �޸������� 4MB�� ���̴�.
*  ���� ó�� �Է� ���� boards�� array�� �ٽ� ��Ȱ���ϸ鼭 �� ����� �����ϴ� ���� �߿��ϴ�.
*  1. cin ���� boards�� ���� �����Ѵ�.
*  2. ������ 3���� temps �迭�� �����.
*  3. boards�� ���� �ٲ��� �ʰ� temps�� ���� �����ϸ鼭 max�� ���Ѵ�.
*  4. min�� ���� dpó�� boards�� ���� �ٲپ�� �ּڰ��� ���Ѵ�.
*  5, �̷��� �ϸ� max �� min�� ������ �� ū �迭�� �� ���� �� �ֱ� ������ �޸� �ʰ��� �� �Ͼ��.
*/


#define max(a,b) (a >= b ? a : b)
#define min(a,b) (a >= b ? b : a)

int N;
int boards[100001][3];
int temps[3];
int res = 0;

int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> boards[i][0] >> boards[i][1] >> boards[i][2];
	}

	int left, right;
	temps[0] = boards[0][0];
	temps[1] = boards[0][1];
	temps[2] = boards[0][2];

	for (int i = 1; i <= N; i++) {
		
		left = max(temps[0], temps[1]);
		right = max(temps[1], temps[2]);

		temps[0] = left + boards[i][0];
		temps[1] = max(left, right) + boards[i][1];
		temps[2] = right + boards[i][2];
		//cout << temps[0] << " " << temps[1] << " " << temps[2] << endl;
	}

	res = max(temps[0], max(temps[1], temps[2]));
	cout << res << " ";

	for (int i = 1; i < N; i++) {
		left = min(boards[i - 1][0], boards[i - 1][1]);
		right = min(boards[i - 1][2], boards[i - 1][1]);

		boards[i][0] += left;
		boards[i][1] += min(left, right);
		boards[i][2] += right;
	}

	res = min(boards[N - 1][0], min(boards[N - 1][1], boards[N - 1][2]));
	cout << res;
	return 0;
}