#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int k;
        cin>>k;
        string s;
        cin>>s;
        int min_time = 0;
        int i = 0;
        while(i<n){
            int count0 = 0;
            for(int j = i ; j<i+k ; j++){
                if(s[j]=='0'){
                    count0++;
                }
            }
            if(count0==0){
                min_time = min_time + 1;
            }
            i = i+k;
        }
        cout<<min_time<<endl;




    }
    return 0;
}