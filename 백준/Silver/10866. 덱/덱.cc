#include <iostream>
#include <string>
using namespace std;

int deque[30000];
int front = 15000;
int rear = 15000;

int empty()
{
	if (front == rear)
		return 1;
	else
		return 0;
}

void push_front(int x)
{
	deque[front] = x;
	front--;
}

void push_back(int x)
{
	rear++;
	deque[rear] = x;
}

int pop_front()
{
	if (empty())
		return -1;
	else
	{
		front++;
		return deque[front];
	}
}

int pop_back()
{
	if(empty())
		return -1;
	else
	{
		rear--;
		return deque[rear + 1];
	}
}

int size()
{
	return rear - front;
}

int getFront()
{
	if(empty())
		return -1;
	else
		return deque[front+1];
}

int getBack()
{
	if(empty())
		return -1;
	else
		return deque[rear];
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		string cmd;
		cin >> cmd;
		if (cmd == "push_front")
		{
			int x;
			cin >> x;
			push_front(x); // Corrected the parameter
		}
		else if (cmd == "push_back")
		{
			int x;
			cin >> x;
			push_back(x);
		}
		else if (cmd == "pop_front")
			cout << pop_front() << endl;
		else if (cmd == "pop_back")
			cout << pop_back() << endl;
		else if (cmd == "size")
			cout << size() << endl;
		else if(cmd == "empty")
			cout << empty() << endl;
		else if(cmd == "front")
			cout << getFront() << endl;
		else if(cmd == "back")
			cout << getBack() << endl;
	}
	return 0;
}
