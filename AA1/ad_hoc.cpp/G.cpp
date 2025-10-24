#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;

    vector<int> v2(n);
    for (int i = 0; i < n; i++)
        cin >> v2[i];

    sort(v2.begin(), v2.end(), greater<int>());

    vector<int> v;
    for (int i = 0; i < n - 1; i++) {
        v.push_back(v2[i] - v2[i + 1]);
    }

    int s1 = 0;
    for (int i = 0; i < k; i++) {
        s1 += v[i];
    }

    int s2 = 0;
    for (int i = n-2; i >= n - (k + 1); i--) {
        s2 += v[i];
    }

    int c = 0;
    if (n > k){

        for (int i = 0; i < k; i++){


            if (s1 > s2) {
                s1 -= v[c];
                s2 -= v[n - (k -i) - 1];
                c++;
            }
            else {
                s2 -= v[n - 2];
                s1 -= v[c + (k - i) - 1];
                n--;
            }
        }

        cout << v2[c] - v2[n-1]<< endl;

    } else {

        cout << "0" << endl;  

    }

    return 0;
}