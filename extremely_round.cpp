#include<bits/stdc++.h>
using namespace std;

int main(){
    long long ti;
    cin >> ti;

    while(ti--){
        long long n;
        cin >> n;
        int count = 0;

        while(n>0){
            if(n>=1 && n<=9){
                count = count+n;
            }
            else{
                count = count+9;
            }
            n = n/10;


        }
        cout<<count<<endl;
    }
    return 0;
}