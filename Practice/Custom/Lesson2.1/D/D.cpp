#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    // si N % 400 == 0, entonces es bisiesto
    // si SOLO es N % 100 == 0, no es bisiesto
    // si N % 4 == 0, es bisiesto

    if (N % 400 ==0){
        cout << "si" << "\n";
    } else if (N % 100 == 0) {
        cout << "no" << "\n";
    } else if (N % 4 == 0){
        cout << "si" << "\n";
    } else {
        cout << "no" << "\n";
    }
    return 0;
}