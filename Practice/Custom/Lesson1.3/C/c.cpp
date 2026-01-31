#include <bits/stdc++.h>
using namespace std;

int main(){
    cin.tie(NULL);
    cout.tie(nullptr);
    ios_base::sync_with_stdio(false);

    int R;
    const double PI=3.14159265358979323846;
    cin >> R;
    double A = PI*(R*R);

    cout << fixed << setprecision(6) << A << "\n";
    return 0;
}