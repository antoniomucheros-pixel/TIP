#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<vector<long long>> a(n, vector<long long>(m));
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            cin >> a[i][j];

 
    for (int i = 0; i < n; ++i) {
        for (int j = 0; j < m; ++j) {
            if (i == 0 && j == 0) continue;
            long long fromTop = (i > 0) ? a[i-1][j] : -1e18;
            long long fromLeft = (j > 0) ? a[i][j-1] : -1e18;
            a[i][j] += max(fromTop, fromLeft);
        }
    }

   
    vector<pair<int,int>> path;
    int i = n-1, j = m-1;
    while (true) {
        path.push_back({i, j});
        if (i == 0 && j == 0) break;
        if (i == 0) --j;
        else if (j == 0) --i;
        else if (a[i-1][j] >= a[i][j-1]) --i;
        else --j;
    }
    reverse(path.begin(), path.end());

    for (auto p : path)
        cout << p.first << " " << p.second << "\n";

    return 0;
}