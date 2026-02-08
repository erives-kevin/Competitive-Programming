#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int T;
    cin >> T;

    if (T<0){
        cout << "Congelada" << "\n";
    } else if (T>=0 && T<=100){
        cout << "Liquida" << "\n";
    } else {
        cout << "Vapor" << "\n";
    }
    return 0;
}