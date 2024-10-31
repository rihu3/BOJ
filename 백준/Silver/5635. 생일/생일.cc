#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Student
{
public:
	string name;
	int dd;
	int mm;
	int yyyy;
};

int main()
{
	int n;
	cin >> n;
	Student students[100];
	for (int i = 0; i < n; i++)
	{
		cin >> students[i].name >> students[i].dd >> students[i].mm >> students[i].yyyy;
	}
	sort(students,students + n, [](Student a, Student b) {
		if (a.yyyy != b.yyyy)
			return a.yyyy < b.yyyy;
		if (a.mm != b.mm)
			return a.mm < b.mm;
		return a.dd < b.dd;
	});
	cout << students[n - 1].name << endl << students[0].name;
	return 0;
}