#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

struct Coordinates
{
    int x;
    int y;
};

int main()
{
    string S; cin >> S;
    int T; cin >> T;

    Coordinates now = {0, 0};
    int cnt = 0;
    for (auto c : S) {
        if ('L' == c) now.x -= 1;
        if ('R' == c) now.x += 1;
        if ('U' == c) now.y += 1;
        if ('D' == c) now.y -= 1;
        if ('?' == c) cnt += 1;
    }

    long dist = abs(now.x) + abs(now.y);
    if (T == 1) cout << dist + cnt << endl;
    else
        if (dist >= cnt) cout << dist - cnt << endl;
        else
            // 未操作?の回数が操作済回数より多い場合
            // 残り未操作の回数が偶数の場合、原点から1離れた部分に収束する
            // 一方、偶数解の未操作が残っている場合、丁度原点に収束させられる
            // それをmodを利用したグルーピングで表現
            if ((cnt - dist) % 2 == 0) cout << 0 << endl;
            else cout << 1 << endl;
}