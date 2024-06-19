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

    ll n; cin>>n;
    ll a[n];
    ll ans=0;
    ll temp=0;
    for(ll i=0; i<n; i++){
        cin>>a[i];
        if(a[i]<temp){
            ans+=(temp-a[i]);
            a[i]=temp;
            
        }
        else{
            temp=a[i];
        }
    }
    cout<<ans;

    


    




}