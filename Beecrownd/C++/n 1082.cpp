#include <bits/stdc++.h>
using namespace std;

vector<bool> visitado;
vector<vector<int>> grafo;
vector<int> turno;

void bfs(int i) {
    queue<int> fila;
    fila.push(i);
    visitado[i] = true;

    while (!fila.empty()) {
        int p = fila.front();
        fila.pop();

        for (int j : grafo[p]) {
            if (!visitado[i]) {
                visitado[j] = true;
                fila.push(j);
                turno.push_back(j);
            }
        }
    }
}

bool in(vector<int> vec, int val) {
    for (size_t i = 0; i < vec.size(); i++) {
        if (vec[i] == val) {
            return true;
        }
    }
    return false;
}

int main() {
    int n;
    cin >> n;

    int v, a;

    for (int m = 0; m < n; m++) {
        cin >> v >> a;
        grafo.clear();
        grafo.resize(v, vector<int>(v, 0));

        char c1, c2;
        for (int i = 0; i < a; i++) {
            cin >> c1 >> c2;;
            c1 -= 97;
            c2 -= 97;
                if (!in(grafo[c1], c2)) {
                    grafo[c1].push_back(c2);
                    grafo[c2].push_back(c1);
            }
        }

        visitado.assign(v, false);

        for (int i = 0; i < v; i++) {
            if (!visitado[i]) {
                bfs(i);
            }
        }

        for (int i : turno){
            cout << i;
        }
        // a == 97 na tabela ascii;
    }
    return 0;
}