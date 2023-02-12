#include<iostream>
using namespace std;

/* ��� / �ð����⵵ : ���� �Ұ� N^2��
* Ʈ�� ��ȸ : pre / in / post
* in�� post�� �־����� �� pre�� ���ϴ� ���̴�. Ʈ�� ��ȸ�� ���Ͽ� ���� �� �����ϴ� �����̰�
* ������ ������ ��Ϳ� �ͼ������� �ʴٸ� ����� ����� �����̴�.
* 
* 1. post�� ���� �׻� rootNode�� ������ �ִ�.
* 2. preOrder�� Ư���� cout�� ���� ���� �����ؾ��Ѵ�.
* 3. ����, postOrder�� ���� ���� �������� inOrder���� �ش� value���� ã�� �̸� ����/���������� ������.
* 4. �� ����� ��� ��������� �ݺ��Ѵ�.(�ٽ� index�� ã��)
* 5. �� �������� ���� ó���� �ʿ��ߴµ�, �̴� ������ ���鼭 2���� ����ó���� �Ͽ���.
*  �������� �����鼭�� ���� ��������...����
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