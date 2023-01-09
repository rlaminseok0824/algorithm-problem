////https://www.acmicpc.net/problem/2580
//
//#include<iostream>
//#include<vector>
//using namespace std;
//
//int sudoku[9][9];
//vector<pair<int,int>> points;
//
//int promising(int col, int row, int value) {
//	for (int i = 0; i < 9; i++) {
//		if (sudoku[col][i] == value) return 0;
//		if (sudoku[i][row] == value) return 0;
//	}
//
//	int startCol = col - (col % 3);
//	int startRow = row - (row % 3);
//	for (int i = startCol; i < startCol + 3; i++) {
//		for (int j = startRow; j < startRow + 3; j++){
//			if (sudoku[i][j] == value) return 0;
//		}
//	}
//	return 1;
//}
//
//void dfs(int cnt) {
//	if (cnt == points.size()) {
//		for (int i = 0; i < 9; i++) {
//			for (int j = 0; j < 9; j++) {
//				cout << sudoku[i][j] << " ";
//			}
//			cout << '\n';
//		}
//		exit(0);
//	}
//
//	int col = points[cnt].first;
//	int row = points[cnt].second;
//	for (int i = 1; i <= 9; i++) {
//		if (promising(col, row,i)) {
//			sudoku[col][row] = i;
//			dfs(cnt + 1);
//			sudoku[col][row] = 0;
//		}
//	}
//	return;
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	int temp;
//	for (int i = 0; i < 9; i++) {
//		for (int j = 0; j < 9; j++) {
//			cin >> temp;
//			sudoku[i][j] = temp;
//			if (temp == 0) {
//				points.push_back(pair<int, int>(i, j));
//			}
//		}
//	}
//
//	dfs(0);
//
//	return 0;
//}