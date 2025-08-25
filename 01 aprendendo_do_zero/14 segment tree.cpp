#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vi>;

#define INF 1000000000

void build(vi &lista, vi &segmentTree, int id, int l, int r) {
    // lista → array original que queremos representar na segment tree.
    // segmentTree → vetor que vai armazenar a segment tree.
    // id → indice do nó atual da raíz
    //  Por convenção: raiz = 1, filho esquerdo = 2id, filho direito = 2id + 1.
    // l = inicio do intervalo analisado
    // r = fim do intervalo analisado

    if (l == r) {
        // condição de parada. chegou à folha
        // Ação: o nó folha recebe o valor do elemento correspondente do array original
        segmentTree[id] = lista[l];
        return;
    }

    int meio = (l + r) / 2; // meio do intervalo
    build(lista, segmentTree, 2*id, l, meio);                     // filho esquerdo
    build(lista, segmentTree, 2*id+1, meio+1, r);                 // filho direito
    segmentTree[id] = segmentTree[2*id] + segmentTree[2*id+1];    // nó atual
}

int main() {
    vi lista = {2, 1, 5, 3, 4, 7};


    return 0;
}