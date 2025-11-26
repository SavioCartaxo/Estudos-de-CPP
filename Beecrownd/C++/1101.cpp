#include <bits/stdc++.h>
using namespace std;

int main (){

    int n, m;
    while (true){
        cin >> m >> n;

        if (m <= 0 || n <= 0)
            break;

        if (m > n){ // m como menor
            int s=m;
            m = n;
            n = s;
        }
        
        int soma = 0;
        for (int s=m; s<=n; s++){
            cout << s << " ";
            soma += s;
        }

        cout << "Sum=" << soma << endl;

    }

    return 0;
}