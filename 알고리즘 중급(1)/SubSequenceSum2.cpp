////https://www.acmicpc.net/problem/14225
//
//#include<iostream>
//using namespace std;
//
//int N;
//int seq[20];
//int result[20 * 100000 + 1];
//int visited[20];
//
//void dfs(int cdx,int cnt, int sum) {
//	result[sum] = true;
//	
//	if (cnt == N) {
//		result[sum] = true;
//		return;
//	}
//
//	for (int i = cdx; i < N; i++) {
//		//if (result[sum + seq[i]]) continue;  이 문장을 추가할 시 스킵 되는 부분이 있어 오류 발생
//		dfs(i + 1, cnt + 1, sum + seq[i]);
//		result[sum] = true;
//	}
//}
//
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		cin >> seq[i];
//	}
//	dfs(0,0, 0);
//
//	int cnt = 1;
//	while (result[cnt]) {
//		cnt++;
//	}
//	cout << cnt;
//	return 0;
//}