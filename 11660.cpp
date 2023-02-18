#include<iostream>
using namespace std;

/* dp  / 시간복잡도 : 최대 N / 거의 logN 정도?
*  처음 문제를 봤을땐 문제가 너무 쉽게 for문을 돌려 풀려고 했지만 시간초과
*  그래서 이전에 뵜던 구간합을 푸는 세그먼트 트리를 생각해냄..
*  하지만 여기는 이차원배열이기 때문에 각 row마다의 구간합을 구하고 이를 계산하는 방식으로 접근함
*  풀이 방법
*  1. 처음 저장할 때 이전 열의 값 + 자신의 값을 저장한다.
*  2. 그리고 최종적으로 구할려는 구간의 마지막 값에서 시작 구간 이전의 구간만을 빼면 구할 수 있다.
* 
*  이번 문제 또한 풀이방법을 알면 실버의 쉬운 난이도로 풀 수 있지만 그렇지 않다면 생각을 해야하는 문제이다...
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