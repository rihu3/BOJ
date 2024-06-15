#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;
	for (int i = 0; i < T; i++)
	{
		int x1, y1, x2, y2;
		cin >> x1 >> y1 >> x2 >> y2;
		int planet;
		cin >> planet;
		int count = 0;
		for (int j = 0; j < planet; j++)
		{
			int px, py, pr;
			cin >> px >> py >> pr;
			int x1_dist = (x1 - px) * (x1 - px) + (y1 - py) * (y1 - py);
			int x2_dist = (x2 - px) * (x2 - px) + (y2 - py) * (y2 - py);
			if (x1_dist < pr * pr and x2_dist < pr * pr)
			{
				continue;
			}
			else if (x1_dist < pr * pr)
				count++;
			else if (x2_dist < pr * pr)
				count++;
		}
		cout << count << "\n";
	}
	return 0;
}
