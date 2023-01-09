////https://www.acmicpc.net/problem/1987
//
//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int R, C;
//char alphabet[20][20];
//int visited[27];
//int directionX[4] = { 1,-1,0,0 };
//int directionY[4] = { 0,0,1,-1 };
//int result = 0;
//
//
//void dfs(int col, int row,int cnt) {
//	for (int i = 0; i < 4; i++) {
//		int nx = row + directionX[i];
//		int ny = col + directionY[i];
//
//		if (nx < 0 || ny < 0 || nx >= C || ny >= R) continue;
//		if (visited[alphabet[ny][nx] - 'A']) continue;
//
//		visited[alphabet[ny][nx] - 'A'] = true;
//		dfs(ny, nx, cnt + 1);
//		visited[alphabet[ny][nx] - 'A'] = false;
//	}
//
//	result = max(result, cnt);
//}
//int main() {
//	cin >> R >> C;
//	for (int i = 0; i < R; i++) {
//		for (int j = 0; j < C; j++)
//			cin >> alphabet[i][j];
//	}
//
//	visited[alphabet[0][0] - 'A'] = true;
//	dfs(0, 0, 0);
//
//	cout << result + 1;
//	return 0;
//}