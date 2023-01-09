////https://www.acmicpc.net/problem/15658
//
//#include<iostream>
//#include<algorithm>
//#include<limits.h>
//using namespace std;
//
//int N;
//int seq[11];
//int notation[4];  //µ¡¼À, »¬¼À, °ö¼À, ³ª´°¼À
//int maxResult = INT_MIN;
//int minResult = INT_MAX;
//
//int solve(int operIndex,int sum,int seqValue) {
//	if (operIndex == 0) {
//		sum += seqValue;
//	}
//	else if (operIndex == 1) {
//		sum -= seqValue;
//	}
//	else if (operIndex == 2) {
//		sum *= seqValue;
//	}
//	else if (operIndex == 3) {
//		sum /= seqValue;
//	}
//
//	return sum;
//}
//
//
//void dfs(int cnt,int sum) {
//	if (cnt == N) {
//		//cout << sum << endl;
//		maxResult = max(maxResult, sum);
//		minResult = min(minResult, sum);
//		return;
//	}
//
//	for (int i = 0; i < 4; i++) {
//		if (notation[i] == 0) continue;
//		notation[i]--;
//		dfs(cnt + 1, solve(i, sum, seq[cnt]));
//		notation[i]++;
//	}
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> seq[i];
//	}
//	for (int i = 0; i < 4; i++) {
//		cin >> notation[i];
//	}
//
//	dfs(1, seq[0]);
//
//	cout << maxResult << '\n' << minResult;
//	return 0;
//}