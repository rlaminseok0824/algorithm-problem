//https://www.acmicpc.net/problem/1107
//����Ǯ�� ��� : 

/*
//���� Ǭ Ǯ�� : ���ҷ��� N�������� +�� -�� �ؼ� �ּҰ��� ã�� ���
// �ð� �ʰ� �� 
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
		//M = 0 �� �� ���� ó��
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

//����
//0���� Ư�� �������� �����Ͽ� �ּҰ��� ����
// �ð��ʰ� ���� Why???

/*
#include <string> //to_string(n) n->string����
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
	} //�ϳ��� ��ư�� ���峭 ���̸� �ȵ�.
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
	int minimum = abs(destination - 100); //�ִ�� ��Ƴ���, +�� ��� ���� �ɷ� ��Ƴ�.
	for (int i = 0; i <= 899800; i++) { //1000000-100100= 899800
		if (click(i)) {
			int tmp = abs(destination - i) + to_string(i).length(); //ä�ΰ���
			//����+ ��ư�� ���� �� (bool click()���� �ϳ��� ��ư�� ���峭 ���� �ƴϴϱ�)
			minimum = min(minimum, tmp);
		}
	}

	printf("%d \n", minimum);
	return 0;
}

*/