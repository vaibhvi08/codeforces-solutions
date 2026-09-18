#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> arr(n);
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        int count = 0;
        int sum = 0;
        for(int i = 0 ; i < n ; i++ ){
            if(arr[i]==-1){
                count++;
            }
            sum = sum+arr[i];
        }
        int operation = 0;
        while(sum<0){
            sum = sum+2;
            count --;
            operation++;
        }
        if(count%2 != 0){
            operation++;
        }
        cout<<operation<<endl;
    }
    return 0;
}