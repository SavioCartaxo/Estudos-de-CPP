#include <bits/stdc++.h>
using namespace std;
using vi = vector<long long>;

int main(){
    int n;
    cin >> n;

    vi v(n+1);
    v[0] = 0;
    for (int i = 1; i <= n; i++) {
        cin >> v[i];
    }

    int i = 1, f = n;
    long long s1 = v[1], s2 = v[n];
    long long maior = 0;
    
    while (i < f) {
        
        if (s1 == s2) {
            maior = s1;
            s2 += v[--f];
            s1 += v[++i];}
        else if (s1 > s2) {
            s2 += v[--f];
        } else {
            s1 += v[++i];
        }
    }

    cout << maior << endl;

    return 0;
}