//https://www.acmicpc.net/problem/1946

/* 
*	�׸��� / �ð����⵵ : O(NlogN) / sort �� �� + for�� �� ��
*	������ 1931���� �� ������ �� ����. ���� �����ϴ� ���� �ð��� ���� �ɷ�����...
*				Ǯ�� ���
*	testCase�� �߰��Ǿ��� ������ �Ź� ������ �� memset�� ���־���Ѵ�.
*	���� ������ �� �� ������ �� ������ ù° index�� �ݵ�� ������ �ȴ�.
*	���� index���� �� ��° ���� ���ϸ鼭 ���� �������� �� ���� ����� �޾Ҵٸ� �߰����� ���ƾ��Ѵ�.
*/



#include<iostream>
#include<memory.h>
#include<algorithm>
using namespace std;

int T,N;
pair<int, int> people[100001];

int main() {
	cin >> T;
	int result = 1;
	while (true) {   //testCase�� ���� while��
		if (T == 0)
			break;
			
		cin >> N;   
				
		for (int i = 0; i < N; i++) {
			cin >> people[i].first >> people[i].second;
		}
		
		sort(people, people + N); //sort�� ���� �� �� ������ �Ѵ�.

		int check = people[0].second;  //first���� �������� sort�� �Ͽ��⿡ second���� check������ ���Ѵ�.

		for (int i = 1; i < N; i++) {
			if (people[i].second < check) {  //second ���� check������ ����� ������ ä���� �ϱ� ������ result++�� �ϰ� check�� ������ �ٲ۴�.
				result++;
				check = people[i].second;
			}
		}

		/*for (int i = 0; i < N; i++) {
			cout << people[i].first << " " << people[i].second << endl;
		}*/
		cout << result << endl;

		memset(people, 0, sizeof(people[0]) * N);  //testCase�� ����Ǳ� ������ memset�� result�� �ʱ�ȭ���ش�.
		result = 1;

		T--;
	}

	return 0;
}