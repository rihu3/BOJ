#include <iostream>
using namespace std;

int main()
{
    int N, M;
    cin >> N >> M;
    char board[50][50];
    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < M; j++)
        {
            cin >> board[i][j];
        }
    }
    int result = 64;
    for (int i = 0; i <= N - 8; i++) {
        for (int j = 0; j <= M - 8; j++) {
            int cnt = 0;
            for (int x = i; x < i + 8; x++)
            {
                for (int y = j; y < j + 8; y++)
                {
                    if ((x + y) % 2 == 0 && board[x][y] != 'W') {
                        cnt++;
                    }
                    if ((x + y) % 2 == 1 && board[x][y] != 'B') {
                        cnt++;
                    }
                }
            }
            if (cnt < result) {
                result = cnt;
            }
            cnt = 64 - cnt;
            if (cnt < result) {
                result = cnt;
            }
        }
    }
    cout << result << endl;
    return 0;
}
