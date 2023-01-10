//https://www.acmicpc.net/problem/1946

/* 
*	그리디 / 시간복잡도 : O(NlogN) / sort 한 번 + for문 한 번
*	문제는 1931보다 더 쉬웠던 것 같다. 문제 이해하는 데에 시간이 조금 걸렸지만...
*				풀이 방법
*	testCase가 추가되었기 때문에 매번 시작할 때 memset을 해주어야한다.
*	먼저 정렬을 한 번 수행한 뒤 무조건 첫째 index는 반드시 포함이 된다.
*	이후 index부터 두 번째 값을 비교하면서 만약 이전보다 더 낮은 등수를 받았다면 추가되지 말아야한다.
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
	while (true) {   //testCase를 위한 while문
		if (T == 0)
			break;
			
		cin >> N;   
				
		for (int i = 0; i < N; i++) {
			cin >> people[i].first >> people[i].second;
		}
		
		sort(people, people + N); //sort를 통해 한 번 정렬을 한다.

		int check = people[0].second;  //first값을 기준으로 sort를 하였기에 second값을 check값으로 비교한다.

		for (int i = 1; i < N; i++) {
			if (people[i].second < check) {  //second 값이 check값보다 등수가 높으면 채용을 하기 때문에 result++을 하고 check의 기준을 바꾼다.
				result++;
				check = people[i].second;
			}
		}

		/*for (int i = 0; i < N; i++) {
			cout << people[i].first << " " << people[i].second << endl;
		}*/
		cout << result << endl;

		memset(people, 0, sizeof(people[0]) * N);  //testCase가 진행되기 때문에 memset과 result를 초기화해준다.
		result = 1;

		T--;
	}

	return 0;
}