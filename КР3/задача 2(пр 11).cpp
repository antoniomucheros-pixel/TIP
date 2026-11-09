#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

bool can(const vector<int>& c, int d, int limit) {
    int days = 1, mn = c[0];
    for (size_t i = 1; i < c.size(); ++i) {
        if (c[i] - mn > limit) {
            ++days;
            mn = c[i];
        }
    }
    return days <= d;
}

int main() {
    int n, d;
    cin >> n >> d;
    vector<int> c(n);
    for (int i = 0; i < n; ++i) cin >> c[i];

    sort(c.begin(), c.end());

    int l = 0, r = c[n-1] - c[0];
    while (l < r) {
        int mid = (l + r) / 2;
        if (can(c, d, mid)) r = mid;
        else l = mid + 1;
    }

    cout << l << "\n";
    return 0;
}
