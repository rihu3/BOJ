#include <iostream>
using namespace std;

int main() {
	int k;
	cin >> k;
	int stack[100001];
	int top = -1;
	for (int i = 0; i < k; i++)
	{
		int x;
		cin >> x;
		if (x == 0)
		{
			top--;
		}
		else
		{
			top++;
			stack[top] = x;
		}
	}
	int sum = 0;
	for (int j = 0; j <= top; j++) {
		sum += stack[j];
	}
	cout << sum;
	return 0;
}
