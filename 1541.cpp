#include<iostream>
#include <vector>
#include<string>
#include<cstring>
using namespace std;

/* greedy   / 시간복잡도 : for문을 두 번 돌렸기 때문에 2N = N
* 이 문제는 간단하게 접근이 가능하지만 string을 파싱하는데 은근 시간이 걸린 문제이다.
* stoi/ strlen 등과 같이 string과 관련한 함수를 잘 아는 것이 문제를 푸는데에 관건
* 마지막 for문은 구현이 잘 생각이 안 나서 좀 더럽게 코딩을 하긴 했다 ㅎㅎ;;
*/

char input[51];
vector<pair<char, int>> oper;
vector<int> operand;
string temp = "";
int result = 0;
bool first = false;

int main() {
	cin >> input;
	for (int i = 0; i < strlen(input); i++) {
		if (input[i] == '-') {
			oper.push_back(pair<char,int>('-', i));
			operand.push_back(stoi(temp));
			temp = "";
		}
		else if (input[i] == '+') {
			oper.push_back(pair<char, int>('+', i));
			operand.push_back(stoi(temp));
			temp = "";
		}
		else {
			temp += input[i];
		}
	}
	operand.push_back(stoi(temp));

	int result = operand[0];
	//cout << operand.size() << " " << oper.size() << endl;
	for (int i = 0; i < oper.size(); i++) {
		if (oper[i].first == '-' && first == false) {
			result -= operand[i + 1];
			first = true;
			//cout << "1 " << result << endl;
		}
		else if (oper[i].first == '-' && first == true) {
			result -= operand[i + 1];
		}
		else if (oper[i].first == '+' && first == false) {
			result += operand[i + 1];
			//cout << "3 " << result << endl;
		}
		else if (oper[i].first == '+' && first == true) {
			result -= operand[i + 1];
			//cout <<"4 " << result << endl;
		}
	}

	cout << result << endl;
	return 0;
}