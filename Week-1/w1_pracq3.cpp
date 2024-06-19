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
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    ll t; cin>>t;
    while(t--){
        ll a,b;
        cin>>a>>b;
        ll c=(2*a)-b;
        ll d=(2*b)-a;
        if(c>=0 && c%3==0 && d>=0 && d%3==0) cout<<"YES"<<"\n";
        else cout<<"NO"<<"\n";
    }
}