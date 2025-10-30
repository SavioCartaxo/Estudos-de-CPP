#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int main(){
    int a, b;
    cin >> a >> b;

    int c = 0;
    for(int i = a; i <= b; i++) {
        string s = to_string(i);
        string s2 = s;
        reverse(s.begin(), s.end());

        if (s == s2) c++;
    }

    cout << c << endl;

    return 0;
}