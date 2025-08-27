#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vi>;

#define INF 1000000000

int N = 4;
vi lista = {1, 2, 3, 4};
vi segmentTree(N*4);

void build(int Nó, int l, int r) {
    // Nó → indice do nó atual da raíz
    //  Por convenção: raiz = 1, filho esquerdo = 2Nó, filho direito = 2Nó + 1.
    // l = inicio do intervalo analisado
    // r = fim do intervalo analisado

    if (l == r) {
        // condição de parada. chegou à folha
        // Ação: o nó folha recebe o valor do elemento correspondente do array original
        segmentTree[Nó] = lista[l];
        return;
    }

    int meio = (l + r) / 2; // meio do intervalo
    build( 2*Nó, l, meio);                     // filho esquerdo
    build(2*Nó+1, meio+1, r);                 // filho direito
    segmentTree[Nó] = segmentTree[2*Nó] + segmentTree[2*Nó+1];    // nó atual
}

// consulta
int query(int Nó, int l, int r, int inicio, int fim) {
    if (inicio < l || fim > r) return 0;
    if (fim <= l && r <= inicio) return segmentTree[Nó];
    int mid = (l + r) / 2;
    return query(2*Nó, l, mid, inicio, fim) + query(2*Nó+1, mid, r, inicio, fim);
}

// atualiza
void update(int Nó, int l, int r, int indice, int valor) {
    if (l == r){
        segmentTree[Nó] = valor;
        return;    
    }

    int mid = (r + l) / 2;
    if (indice <= mid) update(2*Nó, l, mid, indice, valor);
    else update(2*Nó+1, mid+1, r, indice, valor);
    segmentTree[Nó] = segmentTree[2*Nó] + segmentTree[2*Nó+1];
}

int main() {
    


    return 0;
}