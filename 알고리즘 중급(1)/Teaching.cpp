////https://www.acmicpc.net/problem/1062
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//int N, K;
//int word[50];
//char prime[5] = { 'a','n','t','i','c' };
//int visited = 0;
//int result = 0;
//
//void dfs(int cnt, int start) {
//	if (cnt == K) {
//		int tmpCnt = 0;
//		for (int i = 0; i < N; i++) {
//			//cout << (word[i] & visited) << " : " << word[i] << endl;
//			if ((word[i] & visited) == word[i]) tmpCnt++;
//		}
//		//cout << tmpCnt << endl;
//		if (tmpCnt > result) result = tmpCnt;
//		return;
//	}
//
//	for (int i = start; i < 26; i++) {
//		if ((visited & (1 << i))) continue;
//		visited |= (1 << i);
//		dfs(cnt + 1, i);
//		visited &= ~(1 << i);
//	}
//}
//
//
//int main() {
//	ios_base::sync_with_stdio(false);
//	cout.tie(NULL);
//	cin.tie(NULL);
//
//	cin >> N >> K;
//	string temp;
//	for (int i = 0; i < N; i++) {
//		cin >> temp;
//
//		int num = 0;
//		for (int j = 0; j < temp.length(); j++) {
//			num |= (1 << (temp[j] - 'a'));
//		}
//		word[i] = num;
//	}
//
//	//K가 5보다 작으면 기본적으로 들어간 antic이 안 들어가므로 종료
//	if (K < 5) {
//		cout << 0;
//		return 0;
//	}
//
//	for (int i = 0; i < 5; i++)
//		visited |= (1 << (prime[i] - 'a'));
//	
//	dfs(5, 0);
//	cout << result;
//	
//	return 0;
//}