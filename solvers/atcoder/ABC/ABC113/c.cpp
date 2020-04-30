#include <iostream>
#include <set>
#include <vector>
#include <algorithm>
#include <bitset>
#include <sstream>
#include <iomanip>
#include <map>
#include <tuple>

using namespace std;

#define rep(i, a, b) for(int i = a; i < b; i++)
#define rrep(i, a, b) for(int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))

string create_id(int prefecture, int city)
{
    ostringstream stream;
    stream << setfill('0') << setw(6) << prefecture;
    stream << setfill('0') << setw(6) << city;
    return stream.str();
}

map<tuple<int, int>, string> create_id_tuple(vector<tuple<int, int>> &tuples)
{

    map<tuple<int, int>, string> ids;
    int prefecture = 0;
    int city = 0;
    rep (i, 0, tuples.size()) {
        if (i == 0) {
            prefecture = get<0>(tuples[i]);
            ++city;
            ids[tuples[i]] = create_id(prefecture, city);
            continue;
        }
        if (prefecture != get<0>(tuples[i])) {
            prefecture = get<0>(tuples[i]);
            city = 0;
        }
        ++city;
        ids[tuples[i]] = create_id(prefecture, city);
    }
    return ids;
}

int main()
{
    int N, M; cin >> N >> M;
    vector<tuple<int, int>> original(M);
    rep (i, 0, M) {
        int P, Y; cin >> P >> Y;
        original[i] = make_tuple(P, Y);
    }
    vector<tuple<int, int>> sorted;
    copy(original.begin(), original.end(), back_inserter(sorted));
    sort(sorted.begin(), sorted.end());

    map<tuple<int, int>, string> ids = create_id_tuple(sorted);
    
    rep (i, 0, original.size()) {
        cout << ids[original[i]] << endl;
    }
}