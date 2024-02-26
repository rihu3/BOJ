#include <iostream>
using namespace std;

int countCard[20000001] = { 0, };

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int num;
		cin >> num;
		if (num < 0)
			num = -num + 10000000;
		countCard[num]++;
	}
	int M;
	cin >> M;
	for (int j = 0; j < M; j++)
	{
		int findNum;
		cin >> findNum;
		if (findNum < 0)
			findNum = -findNum + 10000000;
		cout << countCard[findNum] << " ";
	}
	return 0;
}
