#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    
    while (cin >> n && n > 0){
        for (int i = 0; i < n; i ++){

            for (int j = 0; j < n; j ++){
                
                int k = abs((j + 1) - i);
                if (j < i) k+=2;
                cout << setw(3) << k;
                if (j < n-1) cout << ' ';
            }    
            
            cout << endl;
        }
        
        cout << endl;
    }

    return 0;
}