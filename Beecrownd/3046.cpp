#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    int s = 0;
    for (int i = 1; i <= n + 1; i++) {
        s += i;
    }

    cout << s << endl;
    return 0;
}