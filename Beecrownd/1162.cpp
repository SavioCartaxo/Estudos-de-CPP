#include <bits/stdc++.h>
using namespace std;

int booble(vector<int> x){
    int c = 0;
    for (size_t i = 0; i < x.size(); i++) {
        for (int j = 0; j < (int)x.size() - i - 1; j++) {
            if (x[j] > x[j + 1]) {
                swap(x[j], x[j + 1]);
                c++;
            }
        }    
    }

    return c;
}

int main(){
    int n;
    cin >> n;

    int m;
    for (int i = 0; i < n; i++) {
        
        cin >> m;
        vector<int> t;
        int v;
        for (int j = 0; j < m; j++){
            cin >> v;
            t.push_back(v);
        }

        int c;
        c = booble(t);

        cout << "Optimal train swapping takes " << c << " swaps." << endl;
    }
    return 0;
}