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
#include<utility>
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
#define fl(i,a,b,c) for(int i=a;i<b;i+=c)
#define rl(i,a,b,c) for(int i=a;i>b;i-=c)
#define sn(a,l) fl(i,0,l,1) cin >> a[i]
#define pr(a,l) fl(i,0,l,1) cout << a[i] << ' '
#define all(a) a.begin(),a.end()
#define sz(a) (int)a.size()
#define in(x) x; cin >> x
#define test() int ts; cin>>ts; while(ts--)
#define print(x) cout << x << '\n'
ll INF = 1e9 + 1;
ll MOD = 1e9 + 7;
ll N = 1e6 + 5;
ll K = 20;
using namespace std;

ll modulation(ll a, ll b, ll m){

    if(b==0) return 1;
    else{
        ll u = modulation(a,b/2,m);
        u  = (u*u)%m;
        if(b%2==0) return u;
        else {return (u*a)%m;}
    }
}
 
int main() {
    fastIO

    int n; cin>>n;

    while(n--){
        ll a,b,c; cin>>a>>b>>c;
        ll x = modulation(b,c,MOD-1);
        cout<<modulation(a,x,MOD)<<'\n';
    }




 
 
}

