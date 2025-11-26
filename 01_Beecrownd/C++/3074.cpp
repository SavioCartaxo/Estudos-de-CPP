#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

vi vetor;
vi arvore;

// constroi a arvore
void build(int no, int e, int d) {
    if (e == d) {
        arvore[no] = vetor[e];
        return;
    }

    int meio = (e + d) / 2;
    build(no*2, e, meio);
    build(no*2+1, meio+1, d);

    arvore[no] = arvore[no*2] + arvore[no*2+1];
}

//troca elemento
void update(int no, int e, int d, int indice, int valor) {
    if (e == d) {
        arvore[no] = valor;
        return;
    }

    int meio = (d + e) / 2;
    if (indice <= meio) update(no*2, e, meio, indice, valor);
    else update(2*no+1, meio+1, d, indice, valor);
    arvore[no] = arvore[2*no] + arvore[2*no+1];
}

//consulta valor
int consulta (int no, int e, int d, int v1, int v2) {
    if (v2 < e || v1 > d) return 0;
    if (v1 <= e && d <= v2) return arvore[no];

    int meio = (d + e) / 2;
    return consulta(2*no, e, meio, v1, v2) + consulta(2*no+1, meio+1, d, v1, v2);
    
}

int main() {

    int n;
    cin >> n;

    vetor.resize(n+1);
    arvore.resize((n+1)*4);
    for(int i = 1; i <= n; i++) 
        cin >> vetor[i];
    
    int c;
    cin >> c;

    string op;
    int a, b;
    build(1, 1, n);

    for(int i = 0; i < c; i++) {
        cin >> op;

        if (op == "SUM") {
            cin >> a >> b; // a = inicio, b = fim
            int s = consulta(1, 1, n, a, b);

            cout << s << endl;
        } else if (op == "Troca") {
            cin >> a >> b; // a = indice, b = valor

            update (1, 1, n, a, b);
        }

    }

    return 0;
}