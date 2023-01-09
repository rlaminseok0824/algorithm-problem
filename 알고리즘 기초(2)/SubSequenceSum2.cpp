////https://www.acmicpc.net/problem/14225
//
//#include<iostream>
//#include<set>
//using namespace std;
//
//int N;
//int seq[20];
//int visited[20];
//int temp = 0;
//set<int> result;
//
//void dfs(int cdx,int cnt,int maxIndex) {
//	if (cnt == maxIndex) {
//		result.insert(temp);
//		return;
//	}
//
//	for (int i = cdx; i < N;i++) {
//		if (visited[i]) continue;
//		visited[i] = true;
//		temp += seq[i];
//		dfs(i + 1,cnt + 1,maxIndex);
//		temp -= seq[i];
//		visited[i] = false;
//	}
//}
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N;
//	for (int i = 0; i < N;i++) {
//		cin >> seq[i];
//	}
//
//	for (int i = 1;i <= N;i++) {
//		dfs(0,0, i);
//	}
//
//	int before = *result.begin();
//	if (before != 1) {
//		cout << 1;
//		return 0;
//	}
//
//	for (auto a : result) {
//		if (a - before >= 2) {
//			cout << before + 1;
//			return 0;
//		}
//		before = a;
//	}
//	cout << before + 1;
//	
//
//	return 0;
//}

#include<iostream>
using namespace std;

int N;
int seq[20];
int result[20 * 100000];

void dfs(int cnt,int sum) {
	if (cnt == N) {
		result[sum] = true;
		return;
	}

	for (int i = cnt; i < N; i++) {
		dfs(i + 1, sum + seq[cnt]);
		result[sum] = true;
	}
	 
}


int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> seq[i];
	}

	for (int i = 0; i <= 12; i++) {
		cout << result[i] << " ";
	}

	return 0;
}