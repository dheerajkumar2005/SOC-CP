#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <math.h>
#include <set>
#include <map>
#include <list>
#define ll long long int
using namespace std;
ll ways(ll n){
    if(n==1) return 0;
    if(n==2) return 6;
    if(n==3) return 28;
    if(n==4) return 96;
    if(n==5) return 252;
    if(n==6) return 550;
    if(n==7) return 1056;
    if(n==8) return 1848;
    else return (((pow(n,4)-pow(n,2))/2)-4*(pow(n,2)-3*n+2));

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll n; cin>>n;
    for(ll i=1;i<=n;i++){
        cout<<ways(i)<<"\n";
    }

}