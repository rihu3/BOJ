#include <iostream>
#include <cmath>
#include <algorithm>
#include <stack>
using namespace std;
int arr[500000];
int countAry[8001] = { 0, };
int average(int arr[], int len)
{
	int sum = 0;
	for (int i = 0; i < len; i++)
	{
		sum += arr[i];
		countAry[arr[i] + 4000]++;
	}
	return round((float)sum / len);
}

int main()
{
	int n;
	cin >> n;
	int min = 2000000000;
	int max = -2000000000;

	for (int i = 0; i < n; i++)
	{
		cin >> arr[i];
		if (arr[i] < min) min = arr[i];
		if (arr[i] > max) max = arr[i];
	}
	
	sort(arr, arr + n);
	cout << average(arr, n) << endl; // 산술평균
	cout << arr[n / 2] << endl; // 중앙값
	
	// 최빈값, 여러 개일 경우 2번째로 큰 값
	int maxCount = 0;
	int maxIndex = 0;
	bool isSecond = false;
	for (int i = 0; i < 8001; i++)
	{
		if (countAry[i] > maxCount)
		{
			maxCount = countAry[i];
			maxIndex = i;
			isSecond = false;
		}
		else if (countAry[i] == maxCount && !isSecond)
		{
			maxIndex = i;
			isSecond = true;
		}
	}
	cout << maxIndex - 4000 << endl; // 최빈값
	cout << max - min << endl; // 범위
	return 0;
}