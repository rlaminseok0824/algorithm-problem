////https://www.acmicpc.net/problem/1759
//
//#include<iostream>
//#include<algorithm>
//#include<string>
//using namespace std;
//
//int L, C;
//char seq[15];
//char dfs[15];
//bool visited_char[26];
//char vowel[5] = { 'a', 'e', 'i', 'o', 'u' };
//
//int InVowel() {
//	int cnt = 0;
//	for (int i = 0; i < L;i++) {
//		for (int j = 0; j < 5;j++) {
//			if (dfs[i] == vowel[j]) {
//				cnt++;
//				continue;
//			}
//		}
//	}
//	if (cnt <=  L - 2 && cnt > 0)
//		return 1;
//	return 0;
//}
//
//int promising(int cnt) {
//	for (int i = 0; i < cnt; i++) {
//		if (dfs[cnt] < dfs[i])
//			return 0;
//	}
//	return 1;
//}
//
//void solve(int cnt) {
//	if (cnt == L) {
//		if (!InVowel()) return;
//		for (int i = 0; i < L;i++)
//			cout << dfs[i];
//		cout << "\n";
//	}
//
//	for (int i = 0;i < C;i++) {
//		if (visited_char[seq[i] - 'a']) continue;
//		dfs[cnt] = seq[i];
//		if (!promising(cnt)) continue;
//		visited_char[seq[i] - 'a'] = true;
//		solve(cnt + 1);
//		visited_char[dfs[cnt] - 'a'] = false;
//		dfs[cnt] = ' ';
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> L >> C;
//	for (int i = 0; i < C;i++)
//		cin >> seq[i];
//	sort(seq, seq + C);
//
//	solve(0);
//	
//	return 0;
//}