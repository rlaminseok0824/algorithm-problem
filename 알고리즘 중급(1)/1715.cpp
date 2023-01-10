//https://www.acmicpc.net/problem/1715

/*
*  그리디 / 시간복잡도 : logN?   / priority queue에 넣는데에는 hash이기 때문에 logN이 든다. 여기선 입력 받을 때 pq에 넣고 이후에 조금씩 넣기 때문에 logN이 아닐까 생각됨
*	카드 정렬은 가장 작은 값 두 개를 골라 정렬을 시작하면 된다. 따라서 두 개를 섞은 후 넣은 값도 작다면 먼저 연산이 되어야하기 때문에 pq를 써서 먼저 연산되게 하였다.
*/

#include<iostream>
#include<queue>
using namespace std;

int N;
priority_queue<int, vector<int>, greater<int>> pq; //pq는 원래 value가 높은 값이 먼저 들어가지만, 다음과 같이 정의하면 value가 낮은 순으로 들어가게 된다.

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
	if (N == 1) { //N==1 일때 예외처리를 한다.
		cout << 0;
		return 0;
	}

	while (!pq.empty()) {
		result += pq.top();   //result 에 더해주고
		sum += pq.top();	//sum은 cnt가 2이 될때까지 저장해주는 역할을 한다.
		cnt++;
		pq.pop();
		if (pq.empty())     //만약 pop 했을 때 pq가 empty라면 끝나야하기 때문에 break문 처리를 해주었다.
			break;
		if (cnt == 2) {    //2개를 비교하고나서 그 만들어진 값을 다시 pq에 넣는다.
			pq.push(sum);
			cnt = sum = 0;
		}
	}
	cout << result;

	return 0;
}