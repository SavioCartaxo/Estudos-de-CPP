#include <vector>
#include <iostream>

using namespace std;

int main(){
    long long n;
    cin >> n;

    vector<long long> v;
    while (n != 1) {

        v.push_back(n);
        if (n % 2 == 0)
            n = n / 2;
        else
            n = n*3 + 1;
    }

    int x = (int) v.size();
    for (int i = 0; i < x; i++){
        cout <<  v[i] << ' ';
    }

    cout << 1 << endl;

    return 0;
}