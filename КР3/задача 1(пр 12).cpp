#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    vector<string> g(n);
    for (int i = 0; i < n; ++i) cin >> g[i];


    int si = 0, sj = 0;
    for (int i = 0; i < n; ++i)
        for (int j = 0; j < m; ++j)
            if (g[i][j] == 'S') { si = i; sj = j; }

    queue<pair<int,int>> q;
    q.push({si, sj});
    g[si][sj] = '1'; 

    int pdf = 0;
    bool ok = false;

    while (!q.empty()) {
        auto [x, y] = q.front(); q.pop();

        if (g[x][y] == 'P') pdf++;
        if (g[x][y] == 'E') ok = true;


        int nx[4] = {x-1, x+1, x, x};
        int ny[4] = {y, y, y-1, y+1};
        for (int k = 0; k < 4; ++k) {
            if (nx[k] >= 0 && nx[k] < n && ny[k] >= 0 && ny[k] < m
                && g[nx[k]][ny[k]] != '1') {
                q.push({nx[k], ny[k]});
                g[nx[k]][ny[k]] = '1';
            }
        }
    }

    cout << (ok ? pdf : -1) << "\n";
    return 0;
}
