#include<iostream>
using namespace std;

/* dp  / �ð����⵵ : �ִ� N / ���� logN ����?
*  ó�� ������ ������ ������ �ʹ� ���� for���� ���� Ǯ���� ������ �ð��ʰ�
*  �׷��� ������ ���� �������� Ǫ�� ���׸�Ʈ Ʈ���� �����س�..
*  ������ ����� �������迭�̱� ������ �� row������ �������� ���ϰ� �̸� ����ϴ� ������� ������
*  Ǯ�� ���
*  1. ó�� ������ �� ���� ���� �� + �ڽ��� ���� �����Ѵ�.
*  2. �׸��� ���������� ���ҷ��� ������ ������ ������ ���� ���� ������ �������� ���� ���� �� �ִ�.
* 
*  �̹� ���� ���� Ǯ�̹���� �˸� �ǹ��� ���� ���̵��� Ǯ �� ������ �׷��� �ʴٸ� ������ �ؾ��ϴ� �����̴�...
*/


int N, M;
int boards[1025][1025];
pair<int, int> from, to;
int res = 0;


int main() {
	ios_base::sync_with_stdio(false);
	cout.tie(NULL);
	cin.tie(NULL);

	cin >> N >> M;
	int num;
	for (int i = 1; i <= N; i++) {
		for (int j = 1; j <= N; j++) {
			cin >> num;
			boards[i][j] = boards[i][j - 1] + num;
		}
	}

	for (int _ = 0; _ < M; _++) {
		int res = 0;
		cin >> from.first >> from.second >> to.first >> to.second;   //first == y , second == x

		for (int i = from.first; i <= to.first; i++) {
			//cout << boards[i][to.second + 1] << "    " << boards[i][to.second - from.second] << endl;
			res += (boards[i][to.second] - boards[i][from.second - 1]);
		}

		cout << res << '\n';
	}
	
	return 0;
}