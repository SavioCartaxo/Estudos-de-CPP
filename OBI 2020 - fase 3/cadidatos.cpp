#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

vi v;
vi arvore;
int s;

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

//constroi a arvore
void build(int no, int e, int d) {
    if (d == e) {
        arvore[no] = v[e];
        return;
    }

    int m = (d+e) / 2;
    build(2*no, e, m);
    build(2*no+1, m+1, d);

    arvore[no] = mdc(arvore[2*no], arvore[2*no+1]);
}

//Modifica arvore 
void update(int no, int e, int d, int index, int valor) {
    if (e == d) {
        arvore[no] = valor;
        return;
    }

    int meio = (e + d) / 2;
    if (index <= meio) {update(2*no, e, meio, index, valor);}
    else update(2*no+1, meio+1, d, index, valor);

    arvore[no] = mdc(arvore[2*no],arvore[2*no+1]);
}

void consulta(int no, int e, int d, int v1, int v2) {
    if (e == d) {
        if (arvore[no] > 1) s++;
        return;
    }
    
    if (v1 <= e && v2 >= d && arvore[no] > 1){ 
        s += (d - e + 2)*(d - e + 1) / 2;
        return;
    }

    if (v2 < e || v1 > d) return;

    int meio = (e + d) / 2;
    consulta(2*no, e, meio, v1, v2);
    consulta(2*no+1, meio+1, d, v1, v2);
}

int main() {
    int n, m;
    cin >> n >> m;
    v.resize(n,0);
    arvore.resize(n*4);

    for (int i = 0; i< n; i++) 
        cin >> v[i];
    
    int T, I, V; 
    // tipo de op.
    // indice do trocado //indice inicial
    // vai trocar para   //indice final

    build(1, 0, n-1);
    for (int z = 0; z < m; z++) {
        cin >> T >> I >> V;

        if (T == 1) {
            I--;
            update(1,0,n-1,I,V);
            v[I] = V;
        }
        else {
            s = 0;
            I--;V--;
            consulta(1,0,n-1,I,V);
            cout << s << endl;
        }
    
    }
    return 0;
}