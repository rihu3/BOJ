#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

class Member
{
public:
	int age;
	string name;
};

Member members[100000];

int cmp(Member a, Member b)
{
		return a.age < b.age;
}

int main()
{
	int n;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> members[i].age >> members[i].name;
	}
	stable_sort(members, members + n, cmp);

	for (int i = 0; i < n; i++)
	{
		cout << members[i].age << ' ' << members[i].name << '\n';
	}
	return 0;
}
