#include <bits/stdc++.h>
using namespace std;

int main() {
    
    int n, k, c;
    cin >> n >> k >> c;

    vector<int> v;
    int a;
    for(int i = 0; i < n; i++) {
        cin >> a;
        v.push_back(a);
    }

    int s;
    while (k != 0) {
        vector<int> soma = {};

        for(int i = 0; i <= n - c; i++) {
            s = 0;
            for(int j = i; j < i + c; j++) {
                s += v[j];
            }
            
            soma.push_back(s);
        }

        int ind_min = min_element(soma.begin(), soma.end()) - soma.begin();

        for(int i = 0; i < c; i++) {
            v.erase(v.begin() + ind_min);
        }

        k--;
        n-= c;
    }

    s = 0;
    for(int x : v) {
        s+=x;
    }

    cout  << s << endl;

    return 0;
}