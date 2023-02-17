//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int N, K;
//pair<int, int> luggage[101];
//bool visited[101];
//int res = 0;
//
//void dfs(int depth,int value,int idx) {
//	if (depth > K) {
//		return;
//	}
//
//	if (depth == K) {
//		res = max(res, value);
//		return;
//	}
//
//	for (int i = idx; i < N; i++) {
//		dfs(depth + luggage[i].first, value + luggage[i].second,i + 1);
//	}	
//}
//
//int main() {
//	cin >> N >> K;
//	for (int i = 0; i < N; i++) {
//		cin >> luggage[i].first >> luggage[i].second;
//	}
//	dfs(0, 0, 0);
//	
//
//	cout << res;
//
//	return 0;
//}

/* dp  / �ð����⵵ : �ִ� 100 * 100001 = 10000000 ����
*  ó���� ��ǰ�� �� 101�� �ð� ���� 2�ʷ� ���� ������ dfs�� Ǯ �� ������ �˾�����, �׷��� Ǭ�ٸ� �ð����⵵�� 1���� Ȯ��, 2��... �� �ð��ʰ��� �ȴ�.
*  �׷��� ����Ͽ����� �ᱹ ���� ������ �ʾ� Ǯ�̸� �ô�....
* 
*  Ǯ�̹���� �̷���
*  1. K�������� dp�� �̿��Ѵ�. / J�� N�� ũ�⸦ ������ ������ �迭�� �����.
*  2. ���� �ݺ����� ���� ���� ������ ã�� ���� ũ�Ⱑ �־��� ������ ������ �� ���� ���� �ִ´�.
*  3. �׷��� �ʴٸ� ���翡�� �� �ε����� �� ���� dp�� �� + �׸��� �� �ε����� value���� ���ϸ� �ȴ�.

	�ֱ.. �̰� ������ ������ �𸣰� �����Ѵٸ� ������ ����� ������ �� ����....
*/



#include<iostream>
#include<algorithm>
using namespace std;

int N, K;


pair<int, int> luggage[101];
int dp[101][100001];

int main() {
	cin >> N >> K; 

	for (int i = 1; i <= N; i++) {
		cin >> luggage[i].first >> luggage[i].second;
	}

	for (int i = 1; i <= K; i++) {  // K�� limit�� ���ϹǷ� limit���� �ݺ����� �޸���.
		for (int j = 1; j <= N; j++) {  // N�� �־��� ������ ������ �ǹ��Ѵ�.
			if (luggage[j].first > i) {  //���⼭ ���� �־��� i(== K) ���� ���� �ε����� weight�� ũ�ٸ� j -1 ���� �ִ´�.
				dp[j][i] = dp[j - 1][i];
			}
			else { //���� weight�� ũ�� �ʴٸ� j-1 ���� ���� i���� ���� j�� weight�� ���� �� dp�� �� + ���� �ε����� value���� ���� ���� ���ϸ� �ȴ�.
				dp[j][i] = max(dp[j - 1][i - luggage[j].first] + luggage[j].second, dp[j - 1][i]);
			}
		}
	}

	cout << dp[N][K];

	return 0;
}