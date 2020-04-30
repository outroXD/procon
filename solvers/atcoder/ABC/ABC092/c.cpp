#include <bits/stdc++.h>
typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9+7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    int N; cin >> N;
    long long total = 0;
    vector<int> input;
    rrep (i, 0, N) {
        if (i != N) {
            int in; cin >> in;
            input.push_back(in);
            if (i == 0) total += abs(in - 0);
            else total += abs(input[i-1] - input[i]);
        }
        else {
            total += abs(input[i-1] - 0);
        }
    }

    rep (i, 0, N) {
        if (i != N-1) {
            if (i == 0)
                cout << total - (abs(input[i] - 0) + abs(input[i] - input[i+1])) + (abs(0 - input[i+1])) << endl;
            else
                cout << total - (abs(input[i] - input[i-1]) + abs(input[i] - input[i+1])) + (abs(input[i-1] - input[i+1])) << endl;
        }
        else
            cout << total - (abs(input[i] - input[i-1]) + abs(input[i] - 0)) + (abs(input[i-1] - 0)) << endl;
    }
}