////https://www.acmicpc.net/problem/14391
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int N, M;
//int rectangle[4][4];
//int binary[4][4];
//int result = 0;
//
//void count() {   //0은 가로 1은 세로
//	int sum = 0,decimal = 1,sumRow = 0;
//	for (int i = 0; i < N;i++) {
//		for (int j = M-1; j >= 0;j--) {
//			if (!binary[i][j]) {
//				sum += (rectangle[i][j] * decimal);
//				decimal *= 10;
//				if(j != 0)
//					continue;
//			}
//			decimal = 1;
//			sumRow += sum;
//			sum = 0;
//		}
//	}
//
//	sum = 0; decimal = 1;
//	int sumCol = 0;
//	for (int i = 0; i < M;i++) {
//		for (int j = N - 1;j >= 0;j--) {
//			if (binary[j][i]) {
//				sum += (rectangle[j][i] * decimal);
//				decimal *= 10;
//				if (j != 0)
//					continue;
//			}
//			decimal = 1;
//			sumCol += sum;
//			sum = 0;
//		}
//	}
//	result = max(result, (sumRow + sumCol));
//}
//
//void solve(int col,int cnt) {
//	if (col == N) {
//		count();
//		return;
//	}
//
//	if (cnt == M) {
//		solve(col + 1, 0);
//		return;
//	}
//
//	for (int i = 0; i <= 1;i++) {
//		binary[col][cnt] = i;
//		solve(col, cnt + 1);
//		binary[col][cnt] = 0;
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N >> M;
//	char temp;
//	for (int i = 0; i < N;i++) {
//		for (int j = 0; j < M;j++) {
//			cin >> temp;
//			rectangle[i][j] = temp - '0';
//		}
//	}
//
//	solve(0, 0);
//	cout << result;
//	return 0;
//}