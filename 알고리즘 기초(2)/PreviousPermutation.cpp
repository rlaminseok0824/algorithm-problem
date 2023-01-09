//https://www.acmicpc.net/problem/10973
//전체 주석 : ctrl + k + c ,해제 : ctrl + k + u
//
//
//#include<iostream>
//using namespace std;
//
//int N;
//int seq[10001];
//int visited[10001];
//bool flag = false;
//
//int main() {
//	cin >> N;
//	for (int i = 0; i < N;i++)
//		cin >> seq[i];
//	for (int i = N - 1; i >= 1;i--) {
//		if (seq[i - 1] > seq[i]) {
//			for (int j = 0; j < i - 1;j++) {
//				visited[seq[j]] = true;
//			}
//			seq[i - 1]--;
//			while (visited[seq[i - 1]])
//				seq[i - 1]--;
//
//			visited[seq[i - 1]] = true;
//
//			for (int k = i; k < N;k++) {
//				for (int l = N; l >= 1;l--) {
//					if (!visited[l]) {
//						seq[k] = l;
//						visited[l] = true;
//						break;
//					}
//				}
//			}
//			flag = true;
//		}
//		if (flag) break;
//	}
//	if (flag) {
//		for (int i = 0; i < N;i++)
//			cout << seq[i] << " ";
//	}
//	else {
//		cout << -1;
//	}
//
//	return 0;
//}