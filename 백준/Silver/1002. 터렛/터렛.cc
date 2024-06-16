#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x1, y1, r1, x2, y2, r2;
        cin >> x1 >> y1 >> r1 >> x2 >> y2 >> r2;

        int dx = x2 - x1;
        int dy = y2 - y1;
        int powDist = dx * dx + dy * dy; // 두 점 사이의 거리 제곱

        if (x1 == x2 && y1 == y2) { // 두 원의 중심이 같을 때
            if (r1 == r2) cout << -1 << "\n"; // 두 원이 일치
            else cout << 0 << "\n"; // 교점 없음
        }
        else {
            int sumR = r1 + r2;
            int diffR = abs(r1 - r2);

            if (powDist == sumR * sumR || powDist == diffR * diffR) {
                cout << 1 << "\n"; // 외접 또는 내접
            }
            else if (powDist < sumR * sumR && powDist > diffR * diffR) {
                cout << 2 << "\n"; // 두 원이 교차
            }
            else {
                cout << 0 << "\n"; // 교점 없음
            }
        }
    }
    return 0;
}
