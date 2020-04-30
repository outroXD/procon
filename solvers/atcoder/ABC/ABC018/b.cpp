#define rep(i, a, b) for(int i = a; i < b; i++)

#include <iostream>
#include <string>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string S; cin >> S;
    int N; cin >> N;

    rep(i, 0, N) {
        int l, r; cin >> l >> r;
        reverse(S.begin()+l-1, S.begin()+r);
    }
    cout << S << endl;
}