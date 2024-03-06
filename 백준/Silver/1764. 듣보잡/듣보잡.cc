#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

string noSee[500000];
string result[500000];
int resultCnt = 0;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, K;
	cin >> N >> K;
	for (int i = 0; i < N; i++)
		cin >> noSee[i];
	sort(noSee, noSee + N);
	for (int j = 0; j < K; j++)
	{
		string noHear;
		cin >> noHear;
		if (binary_search(noSee, noSee + N, noHear))
		{
			result[resultCnt] = noHear;
			resultCnt++;
		}
	}
	sort(result, result + resultCnt);
	cout << resultCnt << "\n";
	for(int z = 0; z < resultCnt; z++)
		cout << result[z] << "\n";
	
	return 0;
}