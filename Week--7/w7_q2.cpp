#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
#include <climits>
#include <utility>
#define ll long long int
#define fastIO ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define ff first
#define ss second
#define pb push_back
#define po pop_back()
#define lb lower_bound
#define ub upper_bound
#define nl "\n"
#define dbg(x) cout << (#x) << " = " << (x) << nl
#define yes cout << "YES\n"
#define no cout << "NO\n"
#define fl(i,a,b,c) for(ll i=a;i<b;i+=c)
#define rl(i,a,b,c) for(ll i=a;i>b;i-=c)
#define sn(a,l) fl(i,0,l,1) cin >> a[i]
#define pr(a,l) fl(i,0,l,1) cout << a[i] << ' '
#define all(a) a.begin(),a.end()
#define sz(a) (int)a.size()
#define in(x) x; cin >> x
#define test() int ts; cin>>ts; while(ts--)
#define print(x) cout << x << '\n'
const int INF = 1e9 + 1;
const int MOD = 1e9 + 7;
const int N = 1e6 + 5;
const int K = 20;
using namespace std;
 
int main() {
    fastIO
    ll n,q; cin>>n>>q;
    vector<ll> a(n+1,0);
    fl(i,1,n+1,1){cin>>a[i];}
    vector<vector<ll>> b;
    // map<pair<ll,ll>,ll> b;
    

    if(n==1) {
        b.push_back(vector<ll> (1,a[1]));
    }
    else{
        ll p = log2(n);
        // ll w = pow(2,p);
        vector<ll> c;
        for(ll i=1; i<=n; i++){
            c.push_back(a[i]);
        }
        b.push_back(c);
        c.clear();
        for(ll i=1, diff=2 ; i<=p; i++){
            for (ll j=0; j+diff<= n; j++){
                c.push_back(min(b[i-1][j],b[i-1][j+(diff/2)]));

            }
            b.push_back(c);
            c.clear();
            diff=pow(2,i+1);

        }
    
    for(ll i=0; i<q; i++){
        ll x,y; cin>>x>>y;
        x--;y--;

        ll p1=log2(y-x+1);
        ll w = pow(2,p1);
        cout<<min(b[p1][x],b[p1][y-w+1])<<'\n';
        // for(int i=0; i<=p; i++){
        //     for(int j=0; j<b[i].size(); j++ ){
        //         cout<<b[i][j]<<' ';
        //     }
        //     cout<<endl;
        // }
        // // for(int i=0; i<n+1; i++){
        // //     for(int j=0; j<n+1; j++){
        // //         cout<<b[i][j]<<' ';
        // //     }
        // //     cout<<"\n";

        // // }
    }
    }



    
}