#include <iostream>
using namespace std;

int queue[10000000];
int front = -1;
int rear = -1;

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
	int k;
	cin >> n >> k;
	for (int i = 1; i < n + 1; i++)
	{
		push(i);
	}
	cout << "<";
	while (front != rear)
	{
		for (int j = 0; j < k - 1; j++)
		{
			push(pop());
		}
		cout << pop();
		if (front != rear)
		{
			cout << ", ";
		}
	}
	cout << ">";
	return 0;
}