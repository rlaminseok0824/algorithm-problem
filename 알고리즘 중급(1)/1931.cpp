#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

//hash�� ���� ������ �� �� �־��� ���̶� ������ �Ͽ����� 1 1�� ���� ���� ���ڿ� ���� ȸ�� ���۰� ���� ���ٴ� ������ �ֱ� ������
//hash������ ������ ���� ���� �� ����.

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


/* �׸��� / �ð����⵵ : O(NlogN) sort �� �� + N���� for�� �ѹ�
	Ǯ�̹������ ���� ������ �Ͱ� ��������, �������� �� ���� ����� �����Ͽ���.(����: �� ���� index���� ����ð��� ���� 
																			but, �׷��� ����ó���� ���� �ʹ� ������ ���� �߻� ���ɼ� ����)
	������ ������� �Է��� �ް� sort�� �ϸ� N���� loop�� ���� ó���� ���� �ʰ� ������ �����ߴ�.
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
	for (int i = 0; i < N; i++) {    //���� �ð��� ����ð��� �Է� ����
		cin >> meeting[i].first >> meeting[i].second;
	}

	sort(meeting, meeting + N,cmp); //sort�� ���Ͽ� ����ð��� �������� ������������ ������ �� �ʿ䰡 �ִ�.
	
	/*for (int i = 0; i < N; i++) {
		cout << meeting[i].first << " " << meeting[i].second;
		cout << endl << endl;
	}*/

	int endTime = 0;                            //sort�� ���Ͽ� ù��°�� ������ ������ �Ǿ���ϱ� ������
	for (int i = 0; i < N; i++) {
		if (endTime <= meeting[i].first) {      //�������� ������ �����ϴ� ���� ���۽ð��� ã�� cnt++���ش�.
			cnt++;
			endTime = meeting[i].second;
		}
	}
	cout << cnt << endl;
}