#include <iostream>
using namespace std;

int main() {
    int x, y, soma=0;
    cin >> x >> y;

    if (x > y){ // x sempre é o menor
        int a;
        a = x;
        x = y;
        y = a;
    }

    for (int i = x+1; i < y; i++){
        if (abs(i % 2) == 1){
            soma += i;
        }
    }

    cout << soma << endl;

    return 0;
}