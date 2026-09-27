#include<bits/stdc++.h>
using namespace std;

int dx[4] = {-1,1,-1,1};
int dy[4] = {-1,-1,1,1};

int main(){
    int t;
    cin>>t;
    while(t--){
        long long a , b;
        cin>>a>>b;
        long long x_king , y_king;
        cin>>x_king>>y_king;
        long long x_queen , y_queen;
        cin>>x_queen>>y_queen;
        set<pair<long long,long long>> king_hits ;
        set<pair<long long,long long>>queen_hits;
        for(int j = 0 ; j < 4 ; j++){
            king_hits.insert({x_king+a*dx[j] , y_king+b*dy[j]});
            king_hits.insert({x_king+b*dx[j] , y_king+a*dy[j]});

            queen_hits.insert({x_queen+a*dx[j] , y_queen+b*dy[j]});
            queen_hits.insert({x_queen+b*dx[j] , y_queen+a*dy[j]});

        }
        int ans = 0 ;
        for(auto position : king_hits){
            if(queen_hits.find(position) != queen_hits.end()){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}

