#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

#define pb push_back
int c = 0;

vi line(){
    string linha;
    getline(cin, linha);
    stringstream ss(linha);
    vi v; int x;
    while (ss >> x) {v.pb(x); c+= x;}
    return v;
}

int main(){
    int n, k;
    cin >> n >> k;
    cin.ignore();
    
    vi v = line();

    while (true) {
        int s = 0, subarrays = 0;
        for (int i = 0; i < (int) v.size(); i++){
            
            if (v[i] >= c) { // nao sei se esse if esta certo
                subarrays++;
                if (s > 0 && i != 0) {
                    if (v[i-1] < c){
                        subarrays++;
                        s = 0;}
                }

            } else {
                s += v[i];
                if (s > c) {
                    s = v[i];
                    subarrays++;

                }
            }

            if (subarrays > k) break;
        }

        if (subarrays == k) {cout << subarrays << endl; return 0;}
    }

    return 0;
}