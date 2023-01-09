////https://www.acmicpc.net/problem/7576
//
//ó�� ���� ���� ���(�ð��ʰ�)
//������ �迭�� ���鼭 1�� ������ bfs ���� ĭ���� +1 ���� 
//���� 1�� ������ ���� bfs �����ϸ鼭 ���� ������ ���ڰ� ��ġ�� ������ ����
//������ �ݺ����� ���� ���⶧���� �ð��ʰ� ��
//����� ������ ���� �ƴ� �ݺ����� �ٿ� �ð����⵵�� ���̴� ��
// -> 1�� ���� ���� ã�� �ѹ��� bfs�� ����

//#include<iostream>
//#include<queue>
//#include<utility>
//#include<algorithm>
//#include<vector>
//using namespace std;
//
//int M, N;
//int tomato[1002][1002];
//vector<pair<int, int>> ripeIndex;
//int x, y;
//int directionX[4]{ 1,0,-1,0 };
//int directionY[4]{ 0,1,0,-1 };
//int result = 0;
//bool impossible = false;
//
//void bfs() {
//	queue<pair<int, int>> q;
//	for (int i = 0; i < ripeIndex.size();i++) {
//		q.push(pair<int, int>(ripeIndex[i].first, ripeIndex[i].second));
//	}
//
//	while (!q.empty()) {
//		/*for (int i = 1; i <= N;i++) {
//			for (int j = 1; j <= M;j++) {
//				cout << tomato[i][j] << " ";
//			}
//			cout << endl;
//		}
//		cout << endl;*/
//		y = q.front().first;
//		x = q.front().second;
//		q.pop();
//		for (int i = 0; i <= 3;i++) {
//			if (x == M && i == 0) continue;
//			if (x == 1 && i == 2) continue;
//			if (y == 1 && i == 3) continue;
//			if (y == N && i == 1) continue;
//
//			int nx = x + directionX[i];
//			int ny = y + directionY[i];
//
//			if (tomato[ny][nx] == 0) {
//				tomato[ny][nx] = tomato[y][x] + 1;
//				q.push(pair<int, int>(ny, nx));
//			}
//		}
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> M >> N;
//
//	for (int col = 1; col <= N;col++) {   //�Է�
//		for (int row = 1; row <= M; row++)
//			cin >> tomato[col][row];
//	}
//
//	for (int col = 1; col <= N; col++) {   //�丶�� ���� ���� �ε��� ã��
//		for (int row = 1; row <= M;row++) {
//			if (tomato[col][row] == 1) ripeIndex.push_back(pair<int, int>(col,row));
//		}
//	}
//
//	bfs();   //bfs�� ���
//	
//	for (int col = 1; col <= N;col++) {   //�� ã�� �� 0�� �ִ����� �ϼ� ���
//		for (int row = 1; row <= M; row++) {
//			if (tomato[col][row] == 0) {
//				impossible = true;
//				break;
//			}
//			result = max(result, tomato[col][row]);
//		}
//	}
//
//	if (impossible) cout << -1;
//	else {
//		cout << result - 1;
//	}
//
//	return 0;
//}