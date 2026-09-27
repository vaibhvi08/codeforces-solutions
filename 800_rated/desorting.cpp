#include<bits/stdc++.h>
using namespace std;


int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> a(n);
        for(int i = 0 ; i< n ; i++){
            cin>>a[i];
        }
        if(!is_sorted(a.begin(),a.end())){
            cout<<0<<endl;
        }
        else{
            int x = 1;
            int y = 0;
            int min_diff = a[1] - a[0];
            for(int i = 1; i<n-1 ; i++){
                int diff = a[i+1] - a[i];
                if(diff<min_diff){
                    min_diff = diff;
                    x = i+1;
                    y = i;
                }
            }
            cout << min_diff / 2 + 1 << endl;



        }

    }
    return 0;
}