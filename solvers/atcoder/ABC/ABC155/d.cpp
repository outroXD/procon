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

long long N, K;
vector<long long> A;

/**
 * upper_boundの第二引数は配列から探索したい値を指定する
 * 制約条件の範疇で、A[i]には0が入りうる
 */
bool check2(int64_t key)
{
    int64_t cnt = 0;
    for (int64_t i = 0; i < N; ++i) {
        auto iter = upper_bound(all(A), key / A[i]);

        if (A[i] >= 0)
            cnt += iter - A.begin();
        else
            cnt += A.end() - iter - 1;

        if (pow(A[i], 2) < key)
            --cnt;
    }

    cnt /= 2;

    return cnt < K;
}

bool check(int64_t key)
{
    int64_t cnt = 0, left, right;
    for (int64_t i = 0; i < N; ++i) {
        left = -1, right = N;
        if (A[i] >= 0) {
            while (right - left > 1) {
                int64_t mid = (right + left) / 2;
                if (A[mid] * A[i] < key)
                    left = mid;
                else
                    right = mid;
            }
            cnt += right;
        }
        else {
            while (right - left > 1) {
                int64_t mid = (right + left) / 2;
                if (A[mid] * A[i] < key)
                    right = mid;
                else
                    left = mid;
            }

            cnt += N - right;
        }

        if (pow(A[i], 2) < key)
            --cnt;
    }

    cnt /= 2;

    return cnt < K;
}

int main()
{
    cin >> N >> K;
    A.resize(N);
    rep (i, 0, N) cin >> A[i];

    sort(A.begin(), A.end());

    int64_t left = -1e18-1, right = 1e+18+1;
    while (right - left > 1) {
        int64_t mid = (right + left) / 2;
        if (check2(mid))
            left = mid;
        else
            right = mid;
    }

    cout << left << endl;
    return 0;
}