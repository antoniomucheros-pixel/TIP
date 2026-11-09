#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, k, l;
    cin >> n >> k >> l;

    vector<long long> v(n);
    for (int i = 0; i < n; ++i) cin >> v[i];

    sort(v.rbegin(), v.rend());

    long long sum = 0;
    for (int i = 0; i < n && k > 0; ++i) {
        int take = min(l, k);
        sum += take * v[i];
        k -= take;
    }

    cout << sum << "\n";
    return 0;
}
