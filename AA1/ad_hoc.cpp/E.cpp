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

// OBS.:

// int invertido = 0;
// while (x > 0) {
//     invertido = invertido * 10 + (x % 10);
//     x /= 10;
// }

// bool ehPalindromo(int x) {
//     if (x < 0 || (x % 10 == 0 && x != 0)) return false;

//     int invertido = 0;
//     while (x > invertido) {
//         invertido = invertido * 10 + x % 10;
//         x /= 10;
//     }
//     // número com dígitos pares ou ímpares
//     return (x == invertido) || (x == invertido / 10);
// }