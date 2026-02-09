#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int N, W=0;
    cin >> N;

    for(int i=0; i<N; i++){
        int F;
        cin >> F;
        W=W+F;
    }

    cout << W << "\n";
    return 0;
}