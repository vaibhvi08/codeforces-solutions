#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0; i < n; i++){
            cin >> arr[i];
        }

        int count2 = 0;
        for(int i = 0; i < n; i++){
            if(arr[i] == 2) count2++;
        }

        if(count2 % 2 != 0){
            cout << -1 << "\n";
        }
        else if(count2 == 0){
            cout << 1 << "\n";   // all 1s: smallest valid k is 1
        }
        else{
            int count = 0;
            int a = 0;
            while(count < (count2/2)){
                if(arr[a] == 2) count++;
                a++;
            }
            cout << a << "\n";
        }
    }
    return 0;
}