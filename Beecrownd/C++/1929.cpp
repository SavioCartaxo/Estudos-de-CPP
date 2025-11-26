#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<int> a(4);

    for (int i = 0; i < 4; i++) {
        cin >> a[i];
    }

    sort(a.begin(), a.end());

    int c = 0;
    if (a[0] + a[1] <= a[2] || a[0] + a[2] <= a[1] || a[2] + a[1] <= a[0])
        c++;
    
    if (a[1] + a[2] <= a[3] || a[1] + a[3] <= a[2] || a[3] + a[2] <= a[1]){
        c++;
    }

    char r;
    if (c == 2) 
        r = 'N';
    else
        r = 'S';

    cout << r << endl;

    return 0;
}