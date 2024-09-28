#include <iostream>
#include <string>
#include <map>
using namespace std;

map<int, string> dict1;
map<string, int> dict2;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int input, output; // 입력 값 개수, 출력 값 개수
	cin >> input >> output;
	for (int i = 1; i <= input; i++) // 사전 등록
	{
		string name;
		cin >> name;
		dict1[i] = name;
		dict2[name] = i;
	}

	for (int j = 0; j < output; j++) // 출력
	{
		string question;
		cin >> question;
		if (isdigit(question[0])) // 숫자인 경우
			cout << dict1[stoi(question)] << "\n";
		else // 문자인 경우
		{
			cout << dict2[question] << "\n";
		}
	}

	return 0;
}