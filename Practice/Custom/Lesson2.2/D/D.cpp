#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N;
    cin >> N;

    long long Factorial = 1;

    if(N==0){
        cout << "1" << "\n";
    } else{
        for(int i=1; i<=N; i++){
            Factorial *= i;
        }
        cout << Factorial << "\n";
    }
    return 0;
}