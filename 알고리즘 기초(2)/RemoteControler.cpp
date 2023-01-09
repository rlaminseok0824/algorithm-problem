//https://www.acmicpc.net/problem/1107
//문제풀이 요약 : 

/*
//내가 푼 풀이 : 구할려는 N에서부터 +와 -를 해서 최소값을 찾아 계산
// 시간 초과 뜸 
#include<iostream>
#include<string>
#include<algorithm>
#include<cmath>
using namespace std;

int M;
int N;
bool num[10]{10,false};

int main() {
	cin >> N >> M;
	int temp;
	for (int i = 0; i < M;i++) {
		cin >> temp;
		num[temp] = true;
	}
		
	
	int compareA = N,compareB = N;
	string strCompareA, strCompareB;
	bool isMinA = false, isMinB = false;;
	int cnt = 0;
	while (true) {
		//M = 0 일 때 예외 처리
		if (M == 0) {
			cnt = strCompareA.size();
			break;
		}

		cnt++;
		compareA++;
		strCompareA = to_string(compareA);
		for (int i = 0; i < M;i++) {
			isMinA = true;
			if (!(strCompareA.find(num[i]) == string::npos)) {
				isMinA = false;
			}
		}

		strCompareB = to_string(compareB);
		compareB--;
		for (int i = 0; i < M; i++) {
			isMinB = true;
			if (!(strCompareB.find(num[i]) == string::npos)) {
				isMinB = false;
				break;
			}
		}

		if (isMinA || isMinB) {
			if (isMinA) cnt += strCompareA.size();
			else if (isMinB) cnt += strCompareB.size();
			break;
		}
	}
	cnt = min(abs(N - 100), cnt);
	cout << cnt;
	return 0;
}
*/

//정답
//0에서 특정 범위까지 지정하여 최소값을 도출
// 시간초과 없음 Why???

/*
#include <string> //to_string(n) n->string으로
#include <vector>
#include <algorithm>
#include <iostream>
#include <cmath>
using namespace std;

vector<bool> broken(10, false);

bool click(int now) {
	string s = to_string(now);
	for (int i = 0; i < s.length();i++) {
		if (broken[s[i] - '0']) { return false; }
	} //하나라도 버튼이 고장난 수이면 안됨.
	return true;
}

int main() {
	int destination, n;    scanf("%d %d", &destination, &n);
	int b;
	for (int i = 0; i < n; i++) {
		scanf("%d", &b);
		broken[b] = true;
	}
	string st = to_string(destination);
	int minimum = abs(destination - 100); //최대로 잡아놓되, +로 계속 가는 걸로 잡아놈.
	for (int i = 0; i <= 899800; i++) { //1000000-100100= 899800
		if (click(i)) {
			int tmp = abs(destination - i) + to_string(i).length(); //채널과의
			//차이+ 버튼을 누른 수 (bool click()에서 하나라도 버튼이 고장난 수가 아니니깐)
			minimum = min(minimum, tmp);
		}
	}

	printf("%d \n", minimum);
	return 0;
}

*/