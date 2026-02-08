#include <bits/stdc++.h>
using namespace std;

int main() {
    cin.tie(NULL);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int K;
    double P;

    cin >> K >> P;

    double CT = P*(0.80);
    
    if (K>10 && P>500){
        cout << fixed << setprecision(2)<< CT << "\n";
    } else {
        cout << fixed << setprecision(2)<< P << "\n";
    }
    return 0;
}