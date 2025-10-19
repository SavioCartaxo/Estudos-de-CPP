#include <bits/stdc++.h>
using namespace std;

int main(){
    // like arrays, but you can remove and add elements in the vectors

    vector<string> cars = {"Volvo", "BMW", "Ford"};
    
    for (string car : cars) { // lembrar disso aqui
        cout << car << endl;
    }

    // access the first and last element of a vector
    cout << cars.front() << endl;
    cout << cars.back() << endl;

    // access the specific element
    cout << cars.at(0) << endl;

    // access all items of the vector
    for (size_t i = 0; i < cars.size(); i++) { // size_t
        cout << cars[i] << ' ';
    } cout << endl;

    // add vector elements in back
    cars.push_back("Tesla");

    // To remove
    cars.pop_back();

    // ??
    cout << cars.size(); // quantos elementos

    // estructure used to vector is empty
    for (size_t i = 0; i < cars.size(); i++) {
        
        // ...

        if (cars.empty()) {
            break;
        }
    }

    return 0;
}