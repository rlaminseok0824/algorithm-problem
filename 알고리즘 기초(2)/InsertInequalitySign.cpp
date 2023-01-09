////https://www.acmicpc.net/problem/14888
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int N;
//int seq[11];
//int math[4];
//int curNotation[11];
//int maxResult = -2147483647 - 1;  //INT_MIN
//int minResult = 2147483647; //INT_MAX
//int temp;
//
//void count(int a) {
//	if (curNotation[a] == 0) {
//		temp += seq[a];
//	}
//	else if (curNotation[a] == 1)
//		temp -= seq[a];
//	else if (curNotation[a] == 2)
//		temp *= seq[a];
//	else
//		temp /= seq[a];
//}
//
//void dfs(int cnt) {
//	if (cnt == N) {
//		temp = seq[0];
//		for (int i = 1; i < N;i++) {
//			count(i);
//		}
//		maxResult = max(maxResult, temp);
//		minResult = min(minResult, temp);
//		return;
//	}
//
//	for (int i = 0; i < 4;i++) {
//		if (math[i] == 0) continue;
//		curNotation[cnt] = i;
//		math[i]--;
//		dfs(cnt + 1);
//		math[i]++;
//	}
//}
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N;i++) {
//		cin >> seq[i];
//	}
//	for (int i = 0; i < 4;i++) {
//		cin >> math[i];
//	}
//
//	dfs(1);
//	cout << maxResult << '\n';
//	cout << minResult << '\n';
//
//	return 0;
//}