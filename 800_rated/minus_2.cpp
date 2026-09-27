#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while (t--) {
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        long long cntOdd = 0, cntA = 0, cntB = 0; // A: a%4==0, B: a%4==2
        for (int i = 0; i < n; i++) {
            if (arr[i] % 2 == 1) cntOdd++;
            else if (arr[i]% 4 == 0) cntA++;
            else cntB++;
        }
        int c = max({cntOdd, cntA, cntB});
        cout<<c<<endl;
    }
    return 0;
}