#include <iostream>
#include <cmath>
using namespace std;

#define PI 3.141592653589793

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    cout << fixed;
    cout.precision(2);

    double x1, y1, x2, y2, x3, y3;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3) {
        // Calculate triangle area
        double triArea = abs(x1 * (y2 - y3) + x2 * (y3 - y1) + x3 * (y1 - y2)) / 2.0;

        // Calculate circumradius (radius of the circumscribed circle)
        double side1 = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
        double side2 = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
        double side3 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
        double circumRadius = (side1 * side2 * side3) / (4.0 * triArea);

        // Calculate circumference (2 * PI * radius)
        double circumference = 2.0 * PI * circumRadius;

        // Print the circumference rounded to 2 decimal places
        cout << circumference << "\n";
    }

    return 0;
}
