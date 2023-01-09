// https://www.acmicpc.net/problem/14002
/*
#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int N, A[1001], len;
int index, tmp;
int dp[1001];
vector<int> v;

int main(){
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		cin >> A[i];
		len = 0;
		for (int j = 1; j < i; j++)
		{
			if (A[j] < A[i])
				len = max(dp[j], len);
		}
		dp[i] = len + 1;

		// 최대 길이와 최대 값 저장
		if (tmp < len + 1)
		{
			tmp = len + 1; // 최대 길이
			index = i; // 최대 값의 인덱스
		}
	}

	for (int i = index; i >= 1; i--)
	{
		if (dp[i] == tmp)
		{
			v.push_back(A[i]);
			tmp--;
		}
	}

	int size = v.size();
	cout << size << '\n';
	for (int i = 0; i < size; i++)
	{
		cout << v.back() << " ";
		v.pop_back();
	}
}
*/

/*
#include<iostream>
#include<queue>
using namespace std;

#define MAXSIZE 1001

int arr[MAXSIZE];
int value[MAXSIZE];
queue<int> q;

int main() {
	int length, cnt = 1;
	cin >> length;
	for (int i = 1; i <= length;i++) {
		cin >> arr[i];
	}

	for (int i = 1; i <= length; i++) {
		if (arr[i] > value[cnt]) {
			q.push(arr[i]);
			cnt++;
			value[cnt] = arr[i];
		}
	}

	cout << q.size() << endl;
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}

	return 0;
}
*/