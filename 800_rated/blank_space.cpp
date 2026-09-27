#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0 ; i< n ;i++){
            cin>>arr[i];
        }
        int count = 0;
        int max_count = 0;
        for(int i = 0 ; i<n ; i++){
            if(arr[i]==0){
                count++;
            }
            else{
                max_count = max(count , max_count);
                count = 0;

            }
        }
        max_count = max(count,max_count);
        cout<<max_count<<endl;
    }
    return 0;
}