#include<bits/stdc++.h>
using namespace std;

int main(){
    long long t;
    cin >> t;

    while(t--){
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        if(d < b || a + (d - b) < c){
            cout << -1 << "\n";
        }
        else{
            cout << a - c + 2 * (d - b) << "\n";
        }
    }
    return 0;
}