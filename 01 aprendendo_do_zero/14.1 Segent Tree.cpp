#include <bits/stdc++.h>
using namespace std;

const int N = 6;
int a[N] = {2, 1, 5, 3, 4, 7}; // vetor original
int seg[4*N]; // vetor da Segment Tree

// Construir Segment Tree
void build(int node, int l, int r) {
    if (l == r) {
        seg[node] = a[l]; // folha
        return;
    }
    int mid = (l + r) / 2;
    build(2*node, l, mid);
    build(2*node+1, mid+1, r);
    seg[node] = seg[2*node] + seg[2*node+1]; // soma dos filhos
}

// Consulta soma em [ql, qr]
int query(int node, int l, int r, int ql, int qr) {
    if (qr < l || ql > r) return 0; // fora do intervalo
    if (ql <= l && r <= qr) return seg[node]; // completamente dentro
    int mid = (l + r) / 2;
    return query(2*node, l, mid, ql, qr) + query(2*node+1, mid+1, r, ql, qr);
}

// Atualizar posição idx para val
void update(int node, int l, int r, int idx, int val) {
    if (l == r) {
        seg[node] = val;
        return;
    }
    int mid = (l + r) / 2;
    if (idx <= mid) update(2*node, l, mid, idx, val);
    else update(2*node+1, mid+1, r, idx, val);
    seg[node] = seg[2*node] + seg[2*node+1];
}

int main() {
    build(1, 0, N-1);

    cout << "Soma de [1,3]: " << query(1, 0, N-1, 1, 3) << "\n"; // 1+5+3=9
    cout << "Soma de [0,5]: " << query(1, 0, N-1, 0, 5) << "\n"; // 2+1+5+3+4+7=22

    // Atualizando a[2] = 10
    update(1, 0, N-1, 2, 10);
    cout << "Soma de [1,3] após update: " << query(1, 0, N-1, 1, 3) << "\n"; // 1+10+3=14

    return 0;
}
