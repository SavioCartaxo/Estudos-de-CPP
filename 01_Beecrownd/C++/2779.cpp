#include <bits/stdc++.h>
using namespace std;

bool in(vector<int> v, int n){
        for(int i : v){
            if (i == n){
                return true; 
            }
        }

    return false;
}

int main(){
    int n;
    cin >> n;

    int q;
    cin >> q;

    vector<int> v(q);

    int a;
    for (int i = 0;i < q; i++){
        cin >> a;
        if(in(v, a) == false){
            n--;
            v.push_back(a);
        }
    }

    cout << n << endl;

    return 0;
}