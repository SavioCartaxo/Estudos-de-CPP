#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    string a;
    int b;
    for (int i = 0; i < n; i++){
        cin >> a >> b;

        if (a == "Thor")
            cout << 'Y' << endl;
        else
            cout << 'N' << endl;
    }
}