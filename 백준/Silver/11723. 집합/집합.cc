#include <iostream>
#include <string>
using namespace std;

int set[21] = { 0, };

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int M;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		string cmd;
		cin >> cmd;
		if (cmd == "add")
		{
			int x;
			cin >> x;
			set[x] = 1;
		}
		else if (cmd == "remove")
		{
			int x;
			cin >> x;
			set[x] = 0;
		}
		else if (cmd == "check")
		{
			int x;
			cin >> x;
			if (set[x] == 1)
				cout << 1 << "\n";
			else
				cout << 0 << "\n";
		}
		else if (cmd == "toggle")
		{
			int x;
			cin >> x;
			if (set[x] == 1)
				set[x] = 0;
			else
				set[x] = 1;
		}
		else if (cmd == "all")
		{
			for (int i = 1; i <= 20; i++)
				set[i] = 1;
		}
		else if (cmd == "empty")
		{
			for (int i = 1; i <= 20; i++)
				set[i] = 0;
		}
	}

	return 0;
}