#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, m;
    cin >> n >> m;

    n = n % 3;
    m = m % 3;

    vector<int> v = {0,1,2,0};

    if (n == m) {
        m++;
    }

    if (m == 3) 
        m = 0;

    v.erase(remove(v.begin(), v.end(), n), v.end());
    v.erase(remove(v.begin(), v.end(), m), v.end());

    cout << v[0] << endl;

    return 0;
}