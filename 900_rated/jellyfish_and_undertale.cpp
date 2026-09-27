#include <bits/stdc++.h>
#include <map>
#include <set>
#include <algorithm>
#define ll long long
#define mp make_pair
#define pll pair<long long, long long>
#define forf(i,x,y) for(ll i=x; i<y; i++)
#define forr(i,x,y) for(ll i=x; i>y; i--)
#define vll vector<long long>
#define vpll vector<pair<long long, long long>>
using namespace std;
 
ll gcd(ll a, ll b){
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
ll lcm(ll a, ll b){
    return (a / gcd(a, b)) * b;
}
 
void solve(){
    int a , b , n;
    cin>>a>>b>>n;
    vll tools(n);
    forf(i,0,n){
        cin>>tools[i];
    }
    ll c = b;
    forf(i,0,n){
        if(tools[i]<a){
            c+=tools[i];
        }
        else{
            c += a-1;
        }
    }
    cout<<c<<endl;

    
}
 
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll T;
    cin >> T;
    while(T--){
        solve();
    }
    return 0;
}