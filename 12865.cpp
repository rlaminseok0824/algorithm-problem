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

/* dp  / 시간복잡도 : 최대 100 * 100001 = 10000000 정도
*  처음에 물품의 수 101과 시간 제한 2초로 보고 간단한 dfs로 풀 수 있을줄 알았지만, 그렇게 푼다면 시간복잡도는 1개의 확률, 2개... 로 시간초과가 된다.
*  그렇게 고민하였지만 결국 답은 나오지 않아 풀이를 봤다....
* 
*  풀이방식은 이렇다
*  1. K번까지의 dp를 이용한다. / J와 N의 크기를 가지는 이차원 배열을 만든다.
*  2. 이제 반복문을 돌려 만약 현재의 찾는 중의 크기가 주어진 값보다 작으면 그 전의 값을 넣는다.
*  3. 그렇지 않다면 현재에서 그 인덱스를 뺀 번의 dp의 값 + 그리고 그 인덱스의 value값을 더하면 된다.

	솔까말.. 이건 문제의 유형을 모르고 접근한다면 굉장히 어려운 문제인 것 같다....
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

	for (int i = 1; i <= K; i++) {  // K는 limit를 뜻하므로 limit까지 반복문을 달린다.
		for (int j = 1; j <= N; j++) {  // N은 주어진 가방의 갯수를 의미한다.
			if (luggage[j].first > i) {  //여기서 현재 주어진 i(== K) 보다 현재 인덱스가 weight가 크다면 j -1 값을 넣는다.
				dp[j][i] = dp[j - 1][i];
			}
			else { //만약 weight가 크지 않다면 j-1 값과 현재 i에서 현재 j의 weight의 값을 뺀 dp의 값 + 현재 인덱스의 value값을 더한 값과 비교하면 된다.
				dp[j][i] = max(dp[j - 1][i - luggage[j].first] + luggage[j].second, dp[j - 1][i]);
			}
		}
	}

	cout << dp[N][K];

	return 0;
}