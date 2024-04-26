#include <iostream>
using namespace std;

int arr[500][500];

int main() {
	int n, m, b;
	cin >> n >> m >> b;
	for (int i = 0; i < n; i++)
		for (int j = 0; j < m; j++)
			cin >> arr[i][j];

	int minTime = 2147483647, height = 0;
	for (int h = 0; h <= 256; h++)
	{
		int build = 0;
		int destroy = 0;
		for (int i = 0; i < n; i++)
		{
			for (int j = 0; j < m; j++)
			{
				if (arr[i][j] > h)
					destroy += arr[i][j] - h;
				else
					build += h - arr[i][j];
			}
		}
		if (destroy + b >= build)
		{
			int time = build + 2 * destroy;
			if (minTime >= time)
			{
				minTime = time;
				height = h;
			}
		}
	}
	cout << minTime << " " << height;
	return 0;
}