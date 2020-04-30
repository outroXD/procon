#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n; cin >> n;

    vector<long long> seq;
    seq.push_back(0);
    seq.push_back(0);
    seq.push_back(1);

    for (int i = 3; i < n; i++) {
        seq.push_back((seq[i-1] + seq[i-2] + seq[i-3])%10007);
    }

    cout << seq[n-1] << endl;
}