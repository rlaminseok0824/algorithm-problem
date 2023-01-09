////https://www.acmicpc.net/problem/4574
//
//#include<iostream>
//#include<memory.h>
//using namespace std;
//
//int N = 1;
//int sudoku[9][9];
//int value,startRow,value2,startRow2;
//char startCol,startCol2;
//int visitedDomino[10][10];
//int cnt = 1;
//bool flag = false;
//
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
//void dfs(int col,int row) {
//	if (row == 9) {
//		dfs(col + 1, 0);
//		return;
//	}
//
//	if (col == 9) {
//		cout << "Puzzle " << cnt << '\n';
//		for (int i = 0; i < 9; i++) {
//			for (int j = 0; j < 9; j++) {
//				cout << sudoku[i][j];
//			}
//			cout << endl;
//		}
//		cnt++;
//		flag = true;
//		return;
//	}
//
//	if (sudoku[col][row]) {
//		dfs(col, row + 1);
//		return;
//	}
//
//	for (int i = 1; i <= 9; i++) {
//		for (int j = 1; j <= 9; j++) {
//			if (i == j || visitedDomino[i][j] || visitedDomino[j][i]) continue;
//			
//			visitedDomino[i][j] = visitedDomino[j][i] = true;
//			if (row + 1 != 9 && sudoku[col][row + 1] == 0) {
//				if (promising(col, row, i) && promising(col, row + 1, j)) {
//					sudoku[col][row] = i;
//					sudoku[col][row + 1] = j;
//					dfs(col, row + 1);
//					sudoku[col][row] = 0;
//					sudoku[col][row + 1] = 0;
//				}
//			}
//
//			if (flag) {
//				visitedDomino[i][j] = visitedDomino[j][i] = false;
//				return;
//			}
//
//			if (col + 1 != 9 && sudoku[col + 1][row] == 0) {
//				if (promising(col, row, i) && promising(col + 1, row, j)) {
//					sudoku[col][row] = i;
//					sudoku[col + 1][row] = j;
//					dfs(col, row + 1);
//					sudoku[col][row] = 0;
//					sudoku[col + 1][row] = 0;
//				}
//			}
//			visitedDomino[i][j] = visitedDomino[j][i] = false;
//		}
//	}
//}
//
//int main() {
//	while (N != 0) {
//		memset(visitedDomino, 0, sizeof(visitedDomino));
//		memset(sudoku, 0, sizeof(sudoku));
//		flag = false;
//
//		cin >> N;
//		if (N == 0) break;
//		for (int i = 0; i < N; i++) {
//			cin >> value >> startCol >> startRow >> value2 >> startCol2 >> startRow2;
//			sudoku[startCol - 'A'][startRow - 1] = value;
//			sudoku[startCol2 - 'A'][startRow2 - 1] = value2;
//			visitedDomino[value][value2] = visitedDomino[value2][value] = true;
//		}
//
//		for (int i = 1; i <= 9; i++) {
//			cin >> startCol >> startRow;
//			sudoku[startCol - 'A'][startRow - 1] = i;
//		}
//
//		dfs(0, 0);
//	}
//	return 0;
//}