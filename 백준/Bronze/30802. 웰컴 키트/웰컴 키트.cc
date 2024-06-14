#include <iostream>
using namespace std;

int main()

{
	int n;
	cin >> n;
	int size[6], sum = 0;
	for (int i = 0; i < 6; i++)
	{
		cin >> size[i];
		sum += size[i];
	}
	int t, p;
	cin >> t >> p; 
	int T_Bundle = 0;
	int P_Bundle = sum / p;
	int P_Each = sum % p;
	for (int j = 0; j < 6; j++)
	{
		T_Bundle += (size[j] + t - 1) / t;
	}
	cout << T_Bundle << endl;
	cout << P_Bundle << " " << P_Each;
	return 0;
}