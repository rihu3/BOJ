#include <iostream>
#include <algorithm>

using namespace std;

struct Student {
    string first_name;
    string last_name;
};

bool compareStudents(const Student& a, const Student& b) {
    if (a.last_name != b.last_name) {
        return a.last_name < b.last_name;
    }
    else {
        return a.first_name < b.first_name;
    }
}

int main() {
    int n;
    cin >> n;

    Student students[101];

    for (int i = 0; i < n; ++i) {
        cin >> students[i].first_name >> students[i].last_name;
    }

    sort(students, students + n, compareStudents);

    for (int i = 0; i < n; ++i) {
        cout << students[i].first_name << " " << students[i].last_name << "\n";
    }

    return 0;
}
