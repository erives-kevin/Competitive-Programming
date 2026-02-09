#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    double M, U;
    int nDias=0;
    cin >> M >> U;
 
    while(M>U){
        M/=2;
        nDias++;
    }
     cout << nDias << "\n";
    return 0;
}