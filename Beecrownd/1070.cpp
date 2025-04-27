#include <iostream>
using namespace std;

int main() {
    int a, contador=0;
    cin >> a;

    while (contador < 6) {
        if (a % 2 == 1){
            cout << a << endl;
            contador++;
        }
        a++;
    }
    return 0;
}