#include <cmath>
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

int main()
{
    int N; cin >> N;
    double T, A; cin >> T >> A;
    vector<double> abss, cp;
    rep(i, 0, N) {
        int h; cin >> h;
        abss.push_back(abs(A - (T - h * 0.006)));
    }

    copy(abss.begin(), abss.end(), back_inserter(cp));
    sort(abss.begin(), abss.end());
    vector<double >::iterator iter = find(cp.begin(), cp.end(), abss[0]);
    size_t index = distance(cp.begin(), iter);
    cout << index+1 << endl;
}