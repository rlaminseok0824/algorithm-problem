////https://www.acmicpc.net/problem/1182
//// dfs + 비트마스킹을 이용하여 풀어봄
//
//#include<iostream>
//using namespace std;
//
//int N,S;
//int seq[21];
//int bit = 0;
//int result = 0;
//
//void solve(int cnt,int max,int cdx) {
//	if (cnt == max) {
//		//cout << "bit : " <<bit << endl;
//		int temp = 0;
//		for (int i = 1; i <= N;i++) {
//			int chk = bit & (1 << i);
//			//cout << chk << " ";
//			if (chk != 0) temp += seq[i];
//		}
//		//cout << endl;
//		if (S == temp) result++;
//		return;
//	}
//
//	for (int i = cdx; i <= N;i++) {
//		bit = bit | (1 << i);
//		solve(cnt + 1,max,i + 1);
//		bit = bit & ~(1 << i);
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N >> S;
//	for (int i = 1; i <= N;i++)
//		cin >> seq[i];
//
//	for (int i = 1; i <= N;i++) {
//		bit = 0;
//		solve(0,i,1);
//	}
//
//	//cout << ans.size();
//	cout << result;
//	return 0;
//}