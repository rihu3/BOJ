#include<iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int answer = 0; // 영화 제목
	int cnt = 0; // 영화 제목 순서

	while (cnt != N)
	{
		answer++;
		int temp = answer;
		while (temp != 0)
		{
			if (temp % 1000 == 666)
			{
				cnt++;
				break;
			}
			else temp /= 10; // 일의 자리 삭제
		}
	}
	cout << answer;
	return 0;
}