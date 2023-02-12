#include<iostream>
using namespace std;

/* 재귀 / 시간복잡도 : 측정 불가 N^2쯤
* 트리 순회 : pre / in / post
* in과 post가 주어졌을 때 pre를 구하는 것이다. 트리 순회에 관하여 아주 잘 이해하는 문제이고
* 문제의 구현이 재귀에 익숙해있지 않다면 상당히 어려운 문제이다.
* 
* 1. post의 끝은 항상 rootNode를 가지고 있다.
* 2. preOrder의 특성상 cout은 가장 먼저 시작해야한다.
* 3. 따라서, postOrder의 끝의 값을 시작으로 inOrder에서 해당 value값을 찾고 이를 왼쪽/오른쪽으로 나눈다.
* 4. 이 방법을 계속 재귀적으로 반복한다.(다시 index를 찾고)
* 5. 이 과정에서 예외 처리가 필요했는데, 이는 실제로 찍어보면서 2개의 예외처리를 하였다.
*  생각보다 어려우면서도 쉬운 문제였다...ㅎㅎ
*/


#define MAXSIZE 100001

int N;
int inOrder[MAXSIZE],postOrder[MAXSIZE];

void rec(int start, int pivot ,int end, int postIndex) {
	if (start > end) return;
	//cout << "1 :" << start << " 2 : " << pivot << " 3 : " << end << " 4 : " << postIndex << " " << endl;
	cout << pivot << " ";
	if (start == end) return;
	for (int i = start; i <= end; i++) {
		if (inOrder[i] == pivot) {
			rec(start, postOrder[(postIndex - (end-i) - 1)], i - 1, (postIndex - (end - i) - 1));
			rec(i + 1, postOrder[(postIndex - 1)], end, (postIndex- 1));
		}
	}
}


int main() {
	ios_base::sync_with_stdio(NULL);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> inOrder[i];
	}
	for (int i = 0; i < N; i++) {
		cin >> postOrder[i];
	}
	
	rec(0, postOrder[N - 1], N - 1, N - 1);
	return 0;
}