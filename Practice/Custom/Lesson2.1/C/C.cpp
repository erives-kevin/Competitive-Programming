#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int x, y;
    cin >> x >> y;
    if (x==0 && y==0){
        cout << "origen" << "\n";
    } else if (x==0 || y==0){
        cout << "eje" << "\n";
    } else if (x>0 && y>0){
        cout << "Q1" << "\n";
    } else if (x<0 && y>0){
        cout << "Q2" << "\n";
    } else if (x<0 && y<0){
        cout << "Q3" << "\n";
    } else {
        cout << "Q4" << "\n";
    }
    return 0;
}