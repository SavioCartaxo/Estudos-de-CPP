#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int a, ci=0, co=0;
    for (int i=0; i < n; i++){
        cin >> a;
        if (a >= 10 && a <= 20){
            ci++;
        } else {
            co++;
        }
    }

    cout << ci << " in" << endl;
    cout << co << " out" << endl;

    return 0;
}