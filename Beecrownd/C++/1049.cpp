#include <bits/stdc++.h>
using namespace std;

int main(){
    string a,b,c, r;
    
    cin >> a >> b >> c;

    if (a == "vertebrado"){
        if (b == "ave"){
            if (c == "carnivoro"){
                r = "aguia";
            } else {
                r = "pomba";
            }
        } else {
            if (c == "onivoro"){
                r = "homem";
            } else{
                r = "vaca";
            }
        }
    } else {
        if (b == "inseto"){
            if (c == "hematofago"){
                r = "pulga";
            } else {
                r = "lagarta";
            }
        } else {
            if (c == "hematofago"){
                r = "sanguessuga";
            } else {
                r = "minhoca";
            }
        }
    }

    cout << r << endl;
    return 0;
}