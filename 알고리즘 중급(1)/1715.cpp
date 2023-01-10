//https://www.acmicpc.net/problem/1715

/*
*  �׸��� / �ð����⵵ : logN?   / priority queue�� �ִµ����� hash�̱� ������ logN�� ���. ���⼱ �Է� ���� �� pq�� �ְ� ���Ŀ� ���ݾ� �ֱ� ������ logN�� �ƴұ� ������
*	ī�� ������ ���� ���� �� �� ���� ��� ������ �����ϸ� �ȴ�. ���� �� ���� ���� �� ���� ���� �۴ٸ� ���� ������ �Ǿ���ϱ� ������ pq�� �Ἥ ���� ����ǰ� �Ͽ���.
*/

#include<iostream>
#include<queue>
using namespace std;

int N;
priority_queue<int, vector<int>, greater<int>> pq; //pq�� ���� value�� ���� ���� ���� ������, ������ ���� �����ϸ� value�� ���� ������ ���� �ȴ�.

int main() {
	cin >> N;
	int temp;
	for (int i = 0; i < N; i++) {
		cin >> temp;
		pq.push(temp);
	}

	int sum = 0;
	int result = 0;
	int cnt = 0;
	if (N == 1) { //N==1 �϶� ����ó���� �Ѵ�.
		cout << 0;
		return 0;
	}

	while (!pq.empty()) {
		result += pq.top();   //result �� �����ְ�
		sum += pq.top();	//sum�� cnt�� 2�� �ɶ����� �������ִ� ������ �Ѵ�.
		cnt++;
		pq.pop();
		if (pq.empty())     //���� pop ���� �� pq�� empty��� �������ϱ� ������ break�� ó���� ���־���.
			break;
		if (cnt == 2) {    //2���� ���ϰ��� �� ������� ���� �ٽ� pq�� �ִ´�.
			pq.push(sum);
			cnt = sum = 0;
		}
	}
	cout << result;

	return 0;
}