#include <iostream>
using namespace std;

int queue[1000000];
int front = -1, rear = -1;
void push(int x)
{
	rear++;
	queue[rear] = x;
}
int pop()
{
	front++;
	return queue[front];
}

int main()
{
	
	int n;
	cin >> n;
	for (int i = 1; i <= n; i++)
		push(i);
	while (rear - front != 1)
	{
		pop();
		push(pop());
	}
	cout << pop();
	return 0;
}
