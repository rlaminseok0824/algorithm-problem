////https://www.acmicpc.net/problem/9663
//
//#include<iostream>
//#include<vector>
//#include<utility>
//using namespace std;
//
//int N;
//int chess[15][15];
//vector<pair<int, int>> placed;
//int result = 0;
//
//int promising(int row, int col) {
//	for (auto placedOne : placed) {
//		if (placedOne.first == row || placedOne.second == col) return 0;
//		else if (placedOne.first + placedOne.second == row + col) return 0;
//		else if (placedOne.first - placedOne.second == row - col) return 0;
//	}
//	return 1;
//}
//
//void dfs(int col,int cnt) {
//	if (cnt == N) {
//		result++;
//		return;
//	}
//
//	for (int i = 0; i < N; i++) {
//		if(promising(i,col)) {
//			placed.push_back(pair<int, int>(i, col));
//			dfs(col + 1, cnt + 1);
//			placed.pop_back();
//		}
//	}
//}
//
//int main() {
//	cin >> N;
//	dfs(0, 0);
//	cout << result;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int N;
//int line1[31];
//int line2[31];
//int line3[15];
//int result = 0;
//int temp = 0;
//
//void dfs(int col, int cnt) {
//	if (cnt == N) {
//		result++;
//		return;
//	}
//
//
//	for (int i = 0; i < N; i++) {
//		if (cnt == 0 && N % 2 == 0) {
//			if (i == N / 2) {
//				cout << result * 2;
//				exit(0);
//			}
//		}
//		else if (cnt == 0 && N % 2 == 1) {
//			if (i == N / 2) {
//				temp = result;
//			}
//			if (i == N / 2 + 1) {
//				cout << result + temp;
//				exit(0);
//			}
//		}
//		if (line1[i + col] || line2[i - col + 15] || line3[i]) continue;
//		line3[i] = line1[i + col] = line2[i - col + 15] = true;
//		dfs(col + 1, cnt + 1);
//		line3[i] = line1[i + col] = line2[i - col + 15] = false;
//	}
//}
//
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//	
//	cin >> N;
//	dfs(0, 0);
//	
//	cout << result;
//	return 0;
//}