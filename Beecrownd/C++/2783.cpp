#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, c, m;
    cin >> n >> c >> m;

    vector<int> lc(c);
    for (int i = 0; i < c; i++) {
        cin >> lc[i];
    }

    for (int i = 0; i < m; i++) {
        int it;
        cin >> it;

        auto it_pos = find(lc.begin(), lc.end(), it);
        if (it_pos != lc.end()) {
            lc.erase(it_pos);
            c--;
        }
    }

    cout << c << endl;
    return 0;
}