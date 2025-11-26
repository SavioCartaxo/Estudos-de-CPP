// Enunciado:
// Você tem um grafo não direcionado com n vértices (0 a n-1) e m arestas.
// Seu objetivo é:

// Determinar quantas componentes conexas existem no grafo.

// Imprimir os vértices que pertencem a cada componente (em ordem crescente).

#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
using vii = vector<vi>;

vii m;
vector<bool> visitado;
vii conexos;

vector<int> dfs(int comeco, vector<int> conexoes) {
    visitado[comeco] = true;
    conexoes.push_back(comeco);

    for (int v : m[comeco]){
        if (!visitado[v]) {
            conexoes = dfs(v, conexoes);
        }
    }

    return conexoes;
}

int main() {

    int n, g;
    cin >> n >> g;

    m.resize(n);
    visitado.assign(n, false);
    
    int a, b;
    for (int i = 0; i < g; i++) {
        cin >> a >> b;

        m[a].push_back(b);
        m[b].push_back(a);
    }

    int contador = 0;
    
    for (int i = 0; i < n; i++) {
        if (!(visitado[i])) {

            visitado[i] = true;
            
            vector<int> linha = {i};

            for (int j : m[i]) {
                linha = dfs(j, linha);
            }

            conexos.push_back(linha);
            contador++;
        }
    }

    cout << contador << endl;

    for (int i = 0; i < contador; i++) {
        
        for (int j = 0; j < (int) conexos[i].size(); j++) {
            cout << conexos[i][j];

            if (j < (int) conexos[i].size() - 1)
                cout << " - ";
    
        }
        
        cout << endl;
    }

    return 0;
}