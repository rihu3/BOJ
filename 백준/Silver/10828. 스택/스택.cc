#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int stack[10000];
	int top = -1;
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		
		if (s == "push")
		{
			int x;
			cin >> x;
			top++;
			stack[top] = x;
		}
		else if (s == "pop")
		{
			if (top == -1)
			{
				cout << -1 << endl;
			}
			else
			{
				cout << stack[top] << endl;
				top--;
			}
		}
		else if (s == "size")
		{
			cout << top + 1 << endl;
		}
		else if (s == "empty")
		{
			if (top == -1)
			{
				cout << 1 << endl;
			}
			else
			{
				cout << 0 << endl;
			}
		}
		else if (s == "top")
		{
			if (top == -1)
			{
				cout << -1 << endl;
			}
			else
			{
				cout << stack[top] << endl;
			}
		}
	}
	return 0;
}
