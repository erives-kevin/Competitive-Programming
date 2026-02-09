#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int H, V;
    cin >> H >> V;

    while (H>0){
        if(H<=0){
            cout << "0" << "\n";
            break;
        } 
        cout << H << "\n";
        H-=V;
    }
    return 0;
}