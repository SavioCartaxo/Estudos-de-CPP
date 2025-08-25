#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

int mdc(int a, int b) {
    if (a < b) 
        swap(a, b);
    
    while (b!= 0) {
        int c = b;
        b = a % b;
        a = c;
    }
    return a;
} 

int main() {
    int n, m;
    cin >> n >> m;
    vi v(n+1,0);

    for (int i = 1; i<= n; i++) 
        cin >> v[i];
    
    int T, I, V; 
    // tipo de op.
    // indice do trocado //indice inicial
    // vai trocar para   //indice final
    for (int z = 0; z < m; z++) {
        cin >> T >> I >> V;
        
        if (T == 1) {
            v[I] = V;
        } else {
            int s = 0;

            for (int i = I; i <= V; i++) {
                int mdcatual = 0;
                for(int j = i; j <= V; j++) {
                    mdcatual = mdc(mdcatual, v[j]);

                    if(mdcatual > 1) s++;
                    else break;
                }
            }

            cout << s << endl;
        }


    }

    return 0;
}