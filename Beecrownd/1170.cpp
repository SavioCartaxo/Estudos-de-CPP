#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    int l[12] = {0, 1, 2, 4, 8, 16, 32, 64, 128, 256, 512, 1001};
    cin >> n;

    float x;
    for (int i= 0; i < n; i++){
        cin >> x;

        for (int j = 0; j < 11; j++)
            if (l[j] < x and x <= l[j+1]){
                cout << j << " dias" << endl;
                break;
            }
    }

   return 0;
}