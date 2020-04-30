#include <iostream>

using namespace std;

int main()
{
    int N; cin >> N;

    int h; h = N / 3600;
    N %= 3600;
    int m; m = N / 60;
    N %= 60;
    int s; s = N;

    printf("%02d:%02d:%02d\n", h, m, s);

    return 0;
}