//////https://www.acmicpc.net/problem/12100
////
////#include<iostream>
////#include<queue>
////#include<utility>
////#include<algorithm>
////using namespace std;
////
////int N;
////int board[20][20];
////int tmpBoard[5][4][20][20]; // 0 : cnt, 1 : direction, 2,3 : board
////int directionX[4] = { 1,-1,0,0 };
////int directionY[4] = { 0,0,1,-1 };
////queue<pair<int, int>> q;
////
////
////void bfs() {
////	q.push(pair<int, int>(0, -1));
////	while (!q.empty()) {
////		int cnt = q.front().first;
////		int dir = q.front().second;
////		q.pop();
////
////		for (int i = 0; i < 4; i++) {
////			copy(&board[0][0], &board[0][0] + N, &tmpBoard[cnt + 1][i][0][0]);
////			
////			if (i == 0) {
////				for (int k = 0; k < N; k++) {
////					for (int j = N - 2; j >= 0; j--) {
////						if (tmpBoard[cnt+1][i][k][j] == tmpBoard[cnt + 1][i][k][j + 1]) {
////							tmpBoard[cnt + 1][i][k][j + 1] = board[k][j] * 2;
////							tmpBoard[cnt + 1][i][k][j] = 0;
////						}
////						else if (tmpBoard[cnt + 1][i][k][j] != 0 && tmpBoard[cnt + 1][i][k][j + 1] == 0) {
////							while (tmpBoard[cnt + 1][i][k][j + 1] != 0) {
////								tmpBoard[cnt + 1][i][k][j + 1] = tmpBoard[cnt + 1][i][k][j];
////								tmpBoard[cnt + 1][i][k][j] = 0;
////								j++;
////							}
////						}
////					}
////				}
////			}
////			else if (i == 1) {
////				for (int k = 0; k < N; k++) {
////					for (int j = 1; j < N; j++) {
////						if (tmpBoard[cnt + 1][i][k][j] == tmpBoard[cnt + 1][i][k][j - 1]) {
////							tmpBoard[cnt + 1][i][k][j - 1] = board[k][j] * 2;
////							tmpBoard[cnt + 1][i][k][j] = 0;
////						}
////						else if (tmpBoard[cnt + 1][i][k][j] != 0 && tmpBoard[cnt + 1][i][k][j - 1] == 0) {
////							while (tmpBoard[cnt + 1][i][k][j - 1] != 0) {
////								tmpBoard[cnt + 1][i][k][j - 1] = tmpBoard[cnt + 1][i][k][j];
////								tmpBoard[cnt + 1][i][k][j] = 0;
////								j--;
////							}
////						}
////					}
////				}
////			}
////			
////
////
////		}
////	}
////
////}
////
////int main() {
////	cin >> N;
////	for (int i = 0; i < N; i++) {
////		for (int j = 0; j < N; j++) {
////			cin >> board[i][j];
////		}
////	}
////
////	bfs();
////
////	return 0;
////}
//
//#include<iostream>
//#include<algorithm>
//#include<cstring>
//#include<memory.h>
//using namespace std;
//
//int N;
//int board[6][21][21]; //0 : cnt¿¡ µû¸¥ board
//int made[21][21];
//int result = 0;
//
//
//void dfs(int cnt) {
//	if (cnt == 5) {
//		for (int i = 0; i < N; i++) {
//			for (int j = 0; j < N; j++) {
//				result = max(result, board[cnt][i][j]);
//			}
//		}
//		return;
//	}
//	
//	for (int k = 0; k < 4; k++) {
//		memcpy(board[cnt + 1], board[cnt], sizeof(board[cnt]));
//		memset(made, false, sizeof(made));
//	
//		if (k == 0) {
//			for (int i = 0; i < N; i++) {
//				for (int j = N - 2; j >= 0; j--) {
//					if (made[i][j + 1]) continue;
//
//					if (board[cnt + 1][i][j] != 0 && board[cnt + 1][i][j] == board[cnt + 1][i][j + 1]) {
//						board[cnt + 1][i][j + 1] *= 2;
//						board[cnt + 1][i][j] = 0;
//						made[i][j + 1] = true;
//					}
//					else if (board[cnt + 1][i][j] != 0 && board[cnt + 1][i][j + 1] == 0) {
//						while (board[cnt + 1][i][j + 1] == 0) {
//							if (j + 1 == N) {
//								j--;
//								break; 
//							}
//							board[cnt + 1][i][j + 1] = board[cnt + 1][i][j];
//							board[cnt + 1][i][j] = 0;
//							j++;
//						}
//						j++;
//					}
//				}
//			}
//		}
//		else if (k == 1) {
//			for (int i = 0; i < N; i++) {
//				for (int j = 1; j < N; j++) {
//					if (made[i][j - 1]) continue;
//
//					if (board[cnt + 1][i][j] != 0 && board[cnt + 1][i][j] == board[cnt + 1][i][j - 1]) {
//						board[cnt + 1][i][j - 1] *= 2;
//						board[cnt + 1][i][j] = 0;
//						made[i][j - 1] = true;
//					}
//					else if (board[cnt + 1][i][j] != 0 && board[cnt + 1][i][j - 1] == 0) {
//						while (board[cnt + 1][i][j - 1] == 0) {
//							if (j - 1 == -1) {
//								j++;
//								break;
//							}
//							board[cnt + 1][i][j - 1] = board[cnt + 1][i][j];
//							board[cnt + 1][i][j] = 0;
//							j--;
//						}
//						j--;
//					}
//				}
//			}
//		}
//		else if (k == 2) {
//			for (int i = 0; i < N; i++) {
//				for (int j = N - 2; j >= 0; j--) {
//					if (made[j + 1][i]) continue;
//
//					if (board[cnt + 1][j][i] != 0 && board[cnt + 1][j][i] == board[cnt + 1][j + 1][i]) {
//						board[cnt + 1][j + 1][i] *= 2;
//						board[cnt + 1][j][i] = 0;
//						made[j + 1][i] = true;
//					}
//					else if (board[cnt + 1][j][i] != 0 && board[cnt + 1][j + 1][i] == 0) {
//						while (board[cnt + 1][j + 1][i] == 0) {
//							if (j + 1 == N) {
//								j--;
//								break;
//							}
//							board[cnt + 1][j + 1][i] = board[cnt + 1][j][i];
//							board[cnt + 1][j][i] = 0;
//							j++;
//						}
//						j++;
//					}
//				}
//			}
//		}
//		else if (k == 3) {
//			for (int i = 0; i < N; i++) {
//				for (int j = 1; j < N; j++) {
//					if (made[j - 1][i]) continue;
//
//					if (board[cnt + 1][j][i] != 0 && board[cnt + 1][j][i] == board[cnt + 1][j - 1][i]) {
//						board[cnt + 1][j - 1][i] *= 2;
//						board[cnt + 1][j][i] = 0;
//						made[j - 1][i] = true;
//					}
//					else if (board[cnt + 1][j][i] != 0 && board[cnt + 1][j - 1][i] == 0) {
//						while (board[cnt + 1][j - 1][i] == 0) {
//							if (j - 1 == -1) {
//								j++;
//								break;
//							}
//
//							board[cnt + 1][j - 1][i] = board[cnt + 1][j][i];
//							board[cnt + 1][j][i] = 0;
//							j--;
//						}
//						j--;
//					}
//				}
//			}
//		}
//
//		dfs(cnt + 1);
//	}
//	
//	return;
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N;
//	for (int i = 0; i < N; i++) {
//		for (int j = 0; j < N; j++) {
//			cin >> board[0][i][j];
//		}
//	}
//	dfs(0);
//	cout << result;
//	return 0;
//}