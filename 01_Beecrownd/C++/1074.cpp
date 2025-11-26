#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int a;
    for (int i=0; i<n; i++){
        cin >> a;
        
        if (a != 0 && a % 2 == 0){
            cout << "EVEN";
        } else if (abs(a % 2) == 1){
            cout << "ODD";
        }
        
        if(a == 0){
        cout << "NULL" << endl;
            
        } else if (a > 0){
            cout << " POSITIVE" << endl;
            
        } else{
            cout << " NEGATIVE" << endl; 
        }
    
        
    }
    
    return 0;
}