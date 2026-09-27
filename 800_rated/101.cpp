#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector <int> b(n);
        for(int i = 0; i<n ;i++){
            cin>>b[n];
        }
        int count = 0;
        int slow = 0;
        int fast = 0;
        while(i>n){
            if(b[i]==1&&count==0){
                count ++;
                slow = i;
                fast = i;
            }
            else if(b[i]==-1 && count==0){
                slow = i;
                fast = i;
            }
            
        }

