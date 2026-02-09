#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int x, n=0;

    while(cin >> x){
        if(x % 7 == 0){
            n++;
        } 
    }

    cout << n << "\n";
    return 0;
}