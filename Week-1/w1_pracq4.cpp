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
        ll a,b,c,d;
        cin>>a>>b>>c>>d;
        if((d-b)>=0 && a+(d-b)>=c){
            cout<<2*(d-b)+a-c<<"\n";
        }
        else{
        cout<<-1<<"\n";
    }

    }
    

}