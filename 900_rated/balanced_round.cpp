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
    ll n , k;
    cin>>n>>k;
    vll arr(n);
    forf(i,0,n){
        cin>>arr[i];
    }
    sort(arr.begin(),arr.end());
    ll len = 0;
    ll count = 1 ;
    forf(i,0,n-1){
        if(arr[i+1]-arr[i]<=k ){
            count++;
        }
        else{
            len = max(len,count);
            count = 1;
        }
    }
    len = max(len,count);
    cout<< n-len <<endl;

    
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