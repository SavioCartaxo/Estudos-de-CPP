#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;

vector<int> gerarPrimos(int n) {
    int limite = 40000; // suficientemente grande para pegar ~3500 primos
    vector<bool> isPrime(limite+1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i*i <= limite; i++) {
        if (isPrime[i]) {
            for (int j = i*i; j <= limite; j += i)
                isPrime[j] = false;
        }
    }
    vector<int> primos;
    for (int i = 2; i <= limite && primos.size() < n; i++)
        if (isPrime[i]) primos.push_back(i);
    return primos;
}


int main() {

    vi primos = gerarPrimos(3500);
    
    int n;
    while(cin >> n){
        vi v(n); 
        
        int s = 0;
        for (int i = 0; i < n; i++) {
            s++;
            v[i] = s;
        }

        int posicaoprimo = 0;
        while((int)v.size() != 1) {
            v.erase(v.begin() + (posicaoprimo % n));
            n--;
            posicaoprimo++;
        }
    }

    return 0;
    }