#include <bits/stdc++.h>
using namespace std;
using vi = vector<int>;
#define pi pair<int,int>

int main() {
    int n, m; 
    cin >> n >> m;

    priority_queue<pair<int,int>, vector<pair<int, int>>, greater<pair<int,int>>> pq;
    int a;
    for (int i = 1; i <= n+m; i++){
        cin >> a;
        pq.push({a, i});
    }

    vi s(n+m);
    int i = 1;
    while (!pq.empty()) {
        pi p = pq.top();
        int valor = p.first;
        int pos = p.second;
        s[pos-1] = i++;
        pq.pop();
    }

    for (int i = 0; i < n+m; i++) {
        cout << s[i];

        if (i != n-1 && i != n + m - 1) {
            cout << ' ';
        }

        if (i == n-1 || i == n+m -1) {
            cout << endl;
        }
    }

    cout << endl;

    return 0;
}
