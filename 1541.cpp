#include<iostream>
#include <vector>
#include<string>
#include<cstring>
using namespace std;

/* greedy   / �ð����⵵ : for���� �� �� ���ȱ� ������ 2N = N
* �� ������ �����ϰ� ������ ���������� string�� �Ľ��ϴµ� ���� �ð��� �ɸ� �����̴�.
* stoi/ strlen ��� ���� string�� ������ �Լ��� �� �ƴ� ���� ������ Ǫ�µ��� ����
* ������ for���� ������ �� ������ �� ���� �� ������ �ڵ��� �ϱ� �ߴ� ����;;
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