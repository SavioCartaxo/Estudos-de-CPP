#include <bits/stdc++.h>
using namespace std;

int main(){
    
    int j=7, i=1;
    while (i<=9){
        
        for (int c=1; c<=3; (c++ & j--)){
            cout << "I=" << i << " J=" << j << endl;
        }

        j+=5;
        i+=2;
    }

    return 0;
}