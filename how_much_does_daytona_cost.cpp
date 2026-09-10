#include<bits/stdc++.h>
using namespace std;

bool check_element(vector<int>&arr ,int n , int k){
    for(int i = 0; i<n ; i++){
        if(arr[i] == k){
           return true;
        }
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        vector<int> arr(n);
        for(int i = 0;i<n ;i++){
            cin>>arr[i];
        }
        if((check_element(arr,n,k))==1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
    return 0;
}