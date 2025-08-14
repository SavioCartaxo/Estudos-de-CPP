#include <bits/stdc++.h>
using namespace std;

int main() {

    int x;
    cin >> x;

    int n, m;
    for (int z = 0; z < x; z++) {
        cin >> n;

        vector<int> v = {};        
        for (int i = 0; i < n; i++) {
            cin >> m;

            if (m % 2 == 1) {
                v.push_back(m);
            }
        }

        sort(v.begin(), v.end());

        vector<int> g = {};

        int i = 0, f = ((int) v.size()) - 1;

        while (i <= f) {
            g.push_back(v[f]);
            f--;

            if (i < f) {
                g.push_back(v[i]);
                i++;
            }

        }

        for (int i = 0; i < (int) g.size(); i++) {
            
            cout << g[i];

            if (i != ((int) g.size()) - 1) {
                cout  << " ";
            }
        }

        cout << endl;

    }

    return 0;
}