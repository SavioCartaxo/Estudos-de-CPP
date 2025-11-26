#include <bits/stdc++.h>
using namespace std;

int main(){
    int a=0;
    int p[3] = {1, 2, 3};
    int q[3] = {0, 0, 0};

    while (a != 4){
        cin >> a;

        for (int i=0; i<3; i++)
            if (a == p[i])
                q[i]++;

    }

    cout << "MUITO OBRIGADO" << endl;
    cout << "Alcool: " << q[0] << endl;
    cout << "Gasolina: " << q[1] << endl;
    cout << "Diesel: " << q[2] << endl;

    return 0;
}