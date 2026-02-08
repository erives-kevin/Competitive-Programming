#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int G, M;
    cin >> G >> M;

    if (G==M){
        cout << "empate" << "\n";
    } else if (G>M){
        cout << "Gog" << "\n";
    } else{
        cout << "Magog" << "\n";
    }
    return 0;
}