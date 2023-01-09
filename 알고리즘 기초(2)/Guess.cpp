////https://www.acmicpc.net/problem/1248
//
//#include<iostream>
//using namespace std;
//
//int n;
//char seq[10][10];
//int dfs[10];
//
//int promising(int count) {
//	int sum = 0;
//	for (int i = 0; i <= count;i++) {
//		for (int j = i + 1; j <= count;j++) {
//			for (int k = i; k <= j;k++) {
//				//cout << dfs[k] << " ";
//				sum += dfs[k];
//			}
//			//cout << endl;
//			//cout << "i :" << i << "j : " << j << endl;
//			//cout << "sum : " << sum << "seq : " << seq[i][j] << endl;
//			if (seq[i][j] == '+' && sum <= 0) { return 0; }
//			else if (seq[i][j] == '-' && sum >= 0) { return 0; }
//			else if (seq[i][j] == '0' && sum != 0) { return 0; }
//			sum = 0;
//		}
//	}
//	return 1;
//}
//
//
//void solve(int cnt) {
//	if (cnt == n) {
//		for (int i = 0; i < n;i++) {
//			cout << dfs[i] << " ";
//		}
//		exit(0);
//	}
//
//		//if (cnt == 0 && (dfs[0] == -1 || dfs[0] == 1));
//	for (int i = 0; i <= 10; i++) {
//		if (seq[cnt][cnt] != 0 && i == 0) i++;
//		if (seq[cnt][cnt] == '+') dfs[cnt] = i;
//		else if (seq[cnt][cnt] == '-') dfs[cnt] = i * (-1);
//		//cout << "cnt : " << cnt << endl;
//		//cout << "dfs : " << dfs[cnt] << endl;
//		if (promising(cnt)) {
//			solve(cnt + 1);
//		}
//		dfs[cnt] = 0;
//	}
//	return;
//}
//
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> n;
//	for (int i = 0; i < n;i++) {
//		for (int j = i; j < n;j++)
//			cin >> seq[i][j];
//	}
//	/*for (int i = 0; i < n;i++) {
//		if (seq[i][i] == '+') dfs[i] = 1;
//		else if (seq[i][i] == '-') dfs[i] = -1;
//		else {
//			dfs[i] = 0;
//		}
//	}*/
//	solve(0);
//	return 0;
//}