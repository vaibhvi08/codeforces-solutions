#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n , k;
        cin>>n>>k;
        string s;
        cin>>s;
        map<char, int> mp;

        for (char ch : s) {
            mp[ch]++;
        }

        if(n-k==1){
            cout<<"YES"<<endl;
        }

        int odd = 0;

        for (auto it : mp.begin(); it != mp.end(); it++) {
            if (it->second % 2 != 0) {
                odd++;
    }
}