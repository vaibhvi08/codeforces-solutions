#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int> v(n);
        for(int i = 0 ; i<n ; i++){
            cin>>v[i];
        }
        if(n==2){
            cout<<"Yes"<<endl;
        }
        else{
            set<int> s(v.begin(),v.end());
            if(s.size()==1){
                cout<<"Yes"<<endl;
            }
            else if(s.size() == 2){
                int count = 0;

                for(int i = 0; i < n; i++){
                    if(v[i] == v[0]){
                        count++;
                    }
                }

                if(abs(count - (n - count)) <= 1){
                    cout << "Yes\n";
                }
                else{
                    cout << "No\n";
                }
}
            else{
                cout << "No\n";
}
        }
    }
    return 0;
}