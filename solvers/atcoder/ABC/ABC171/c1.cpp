#include <iostream>
#include <map>
#include <vector>

typedef long long ll;
const int INF = 1e9;
const int MOD = 1e9 + 7;
const ll LINF = 1e18;

using namespace std;

#define rep(i, a, b) for (int i = a; i < b; i++)
#define rrep(i, a, b) for (int i = a; i <= b; i++)
#define all(a)  begin((a)),end((a))
#define uniq(c) (c).erase(unique(all((c))), end((c)))
#define each(i, map) for (auto& i : map)

vector<int> get_factors(int64_t num) {
    const int64_t divnum = 26;
    vector<int> factors;
    int64_t q = num, r = num;
    while (true) {
        q /= divnum;
        r = num - q * divnum;
        num /= divnum;
        if (q == 0) {
            factors.push_back(r);
            break;
        }
        factors.push_back(r);
    }
    reverse(factors.begin(), factors.end());
    return factors;
}

int main() {
    int64_t N; cin >> N;

    vector<int> factors = get_factors(N);
    for (auto &f : factors) {
        switch (f) {
            case 1:
                cout << 'a';
                break;
            case 2:
                cout << 'b';
                break;
            case 3:
                cout << 'c';
                break;
            case 4:
                cout << 'd';
                break;
            case 5:
                cout << 'e';
                break;
            case 6:
                cout << 'f';
                break;
            case 7:
                cout << 'g';
                break;
            case 8:
                cout << 'h';
                break;
            case 9:
                cout << 'i';
                break;
            case 10:
                cout << 'j';
                break;
            case 11:
                cout << 'k';
                break;
            case 12:
                cout << 'l';
                break;
            case 13:
                cout << 'm';
                break;
            case 14:
                cout << 'n';
                break;
            case 15:
                cout << 'o';
                break;
            case 16:
                cout << 'p';
                break;
            case 17:
                cout << 'q';
                break;
            case 18:
                cout << 'r';
                break;
            case 19:
                cout << 's';
                break;
            case 20:
                cout << 't';
                break;
            case 21:
                cout << 'u';
                break;
            case 22:
                cout << 'v';
                break;
            case 23:
                cout << 'w';
                break;
            case 24:
                cout << 'x';
                break;
            case 25:
                cout << 'y';
                break;
            case 26:
                cout << 'z';
                break;
        }
    }
    cout << endl;
}
