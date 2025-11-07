#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> v;

    int a;
    for (int i = 0; i < n; i++) {
        cin >> a;
        if (a % 2 == 0) v.push_back(a);
    }

    int x = (int) v.size();

    for (int i = 0; i < x; i++) {
        cout << v[i];
        if (i != x-1) {
            cout  << " ";
        }
    }
    
    cout << endl;

    return 0;
}
