#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> arr(n);
        for(int i = 0 ; i<n ; i++){
            cin>>arr[i];
        }
        bool same = true;
        for(int i = 0 ; i<n ; i++){
            if(arr[i]!=arr[0]){
                same = false;
                break;
            }
        }
        if(same){
            cout<<"NO"<<endl;
        }
        else{
            sort(arr.begin(), arr.end(), greater<int>());
            if(arr[0]==arr[1]){
                int temp = arr[1];
                arr[1] = arr[n-1];
                arr[n-1] = temp;
            }
            cout<<"YES"<<endl;
            for(int i = 0; i < n ; i++){
                cout<<arr[i]<<" ";
            }
            cout<<endl;
        }
    }
}