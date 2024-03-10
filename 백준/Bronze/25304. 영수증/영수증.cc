#include <iostream>
using namespace std;

int main() {
	int total;
	cin >> total;
	int n;
	cin >> n;
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		int prcie, EA;
		cin >> prcie >> EA;
		sum += prcie * EA;
	}

	if(total == sum) 
		cout << "Yes";
	else
		cout << "No";
	return 0;
}