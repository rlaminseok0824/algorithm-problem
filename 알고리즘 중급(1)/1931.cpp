#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//hash로 쉽게 구현을 할 수 있었을 것이라 생각을 하였지만 1 1과 같이 같은 숫자와 같은 회의 시작과 끝이 같다는 조건이 있기 때문에
//hash만으로 구현은 쉽지 않은 것 같다.

//int N;
//int temp1, temp2,temp;
//int hashing[100000];
//bool isSame[100000];
//int result = 0;
//bool flag = false;
//
//int main() {
//	cin >> N;
//	for (int i = 0; i <= N + 1; i++) {
//		hashing[i] = 1000000;
//	}
//	for (int i = 0; i < N; i++) {
//		cin >> temp1 >> temp2;
//		temp = temp2 - temp1;
//		if (temp == 0) {
//			isSame[temp1] = true;
//		}
//		else if(hashing[temp1] > temp)
//			hashing[temp1] = temp;
//	}
//
//	for (int i = 0; i <= N + 1; i++)
//		cout << hashing[i] << " ";
//	cout << endl;
//
//	for (int i = 0; i <= N + 2; i++) {
//		cout << i << endl;
//		if(i == N+2) break;
//		if (hashing[i] == 1000000) continue;
//		flag = false;
//		if (isSame[i] == true) result++;
//		for (int j = 1; j < hashing[i]; j++) {
//			if (hashing[i + j] != 1000000 && hashing[i] > hashing[i + j] + j) {
//				i += hashing[i +j];
//				if (isSame[i - 1] == true) result++;
//				flag = true;
//				break;
//			}
//		}
//		if (!flag) {
//			i += hashing[i] - 1;
//		}
//		result++;
//	}
//
//	cout << result << endl;
//	return 0;
//}


/* 그리디 / 시간복잡도 : O(NlogN) sort 한 번 + N번의 for문 한번
	풀이방법에는 내가 생각한 것과 같았지만, 구현에서 더 쉬원 방법이 존재하였다.(기존: 각 시작 index별로 종료시간을 저장 
																			but, 그러면 예외처리할 것이 너무 많아져 오류 발생 가능성 높음)
	하지만 순서대로 입력을 받고 sort를 하면 N번의 loop로 예외 처리도 하지 않고 구현이 가능했다.
*/

bool cmp(pair<int, int>& a, pair<int, int>& b) {
	if (a.second == b.second) return a.first < b.first;
	return a.second < b.second;
}

#define MAX 100000

int N,temp,temp2,cnt = 0;
//vector<int> meeting[MAX];

pair<int, int> meeting[MAX];

int main() {
	cin >> N;
	for (int i = 0; i < N; i++) {    //시작 시간과 종료시간을 입력 받음
		cin >> meeting[i].first >> meeting[i].second;
	}

	sort(meeting, meeting + N,cmp); //sort를 통하여 종료시간을 기준으로 내림차순으로 정렬이 될 필요가 있다.
	
	/*for (int i = 0; i < N; i++) {
		cout << meeting[i].first << " " << meeting[i].second;
		cout << endl << endl;
	}*/

	int endTime = 0;                            //sort를 통하여 첫번째가 무조건 선택이 되어야하기 때문에
	for (int i = 0; i < N; i++) {
		if (endTime <= meeting[i].first) {      //다음으로 조건을 만족하는 다음 시작시간을 찾고 cnt++해준다.
			cnt++;
			endTime = meeting[i].second;
		}
	}
	cout << cnt << endl;
}