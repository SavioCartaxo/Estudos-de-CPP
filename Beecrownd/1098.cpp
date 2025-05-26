#include <bits/stdc++.h>
using namespace std;

int main(){
    
    float j=1, i=0;
    while (i<=2.2){
        
        for (int c=1; c<=3; c++){
            cout << "I=" << i << " J=" << j << endl;
            j +=1;
        }

        j-= 2.8;
        i+= 0.2;
    }

    return 0;
}