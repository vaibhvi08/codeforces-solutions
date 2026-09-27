#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n);

    for(int i = 0; i < n; i++){
        cin >> a[i];
    }
    int count = abs(a[0]);

    for(int i = 0; i<n ; i++){
        if(abs(a[i])<count){
            count = abs(a[i]);
        }
    }
    cout<<count<<endl;
    return 0;


}