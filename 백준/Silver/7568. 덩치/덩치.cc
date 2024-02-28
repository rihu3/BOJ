#include <iostream>
using namespace std;

class People
{
public:
	int weight;
	int height;
};


int main()
{
	People peoples[50];
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
		cin >> peoples[i].weight >> peoples[i].height;
	
	for (int j = 0; j < n; j++)
	{
		int rank = 1;
		for (int k = 0; k < n; k++)
		{
			if (peoples[j].weight < peoples[k].weight && peoples[j].height < peoples[k].height)
				rank++;
		}
		cout << rank << " ";
	}
	return 0;
}