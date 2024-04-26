#include <iostream>
#include <stack>
#include <queue>
using namespace std;

stack<int> stk;
queue<int> result;

int start = 1;

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		int num;
		cin >> num;
		while (start <= num)
		{
			stk.push(start);
			result.push(1);
			start++;
		}
		if (stk.top() == num)
		{
			stk.pop();
			result.push(0);
		}
		else {
			cout << "NO";
			return 0;
		}
	}
	while (!result.empty())
	{
		if (result.front() == 1)
			cout << "+\n";
		else
			cout << "-\n";
		result.pop();
	}
	return 0;
}