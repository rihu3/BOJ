#include <iostream>
#include <string>
using namespace std;

int main() {
	int n;
	cin >> n;
	int front = -1;
	int rear = -1;
	int queue[10000];
	for (int i = 0; i < n; i++)
	{
		string s;
		cin >> s;
		if (s == "push")
		{
			int x;
			cin >> x;
			rear++;
			queue[rear] = x;
		}
		else if (s == "pop")
		{
			if (front == rear) 
				cout << -1 << endl;
			else
			{
				front++;
				cout << queue[front] << endl;
			}
		}
		else if (s == "size")
			cout << rear - front << endl;
		else if (s == "empty")
		{
			if (front == rear) cout << 1 << endl;
			else cout << 0 << endl;
		}
		else if (s == "front")
		{
			if (front == rear) cout << -1 << endl;
			else cout << queue[front + 1] << endl;
		}
		else if (s == "back")
		{
			if (front == rear) cout << -1 << endl;
			else cout << queue[rear] << endl;
		}
	}
	return 0;
}
