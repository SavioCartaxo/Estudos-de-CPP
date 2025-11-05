#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    cin.ignore();

    vector<int> v;
    string linha;
    getline(cin, linha);
    stringstream ss(linha);

    int x;
    while (ss >> x) {
        v.push_back(x);
    }
    
    int i = 0, f = 0, ca = 0, max = 0;
    set<int> s;
    while (f < n) {
        
        if (!s.count(v[f])) {
            s.insert(v[f++]);
            ca++;
        
        } else {
            s.erase(v[i++]);
            ca--;
        }

        if (ca > max)
            max = ca;
    }

    cout << max << endl;

    return 0;
}