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
void moves(int n,int a,int b, int c){
    if(n==1){
        cout<<1<<" "<<3<<"\n";
        
    }
    else if(n==2){
        cout<<a<<" "<<b<<"\n";
        cout<<a<<" "<<c<<"\n";
        cout<<b<<" "<<c<<"\n";

    }
    else{
        moves(n-1,a,c,b);
        cout<<a<<" "<<c<<"\n";
        moves(n-1,b,a,c);
    }

}
int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int n; cin>>n;
    cout<<pow(2,n)-1<<"\n";
    moves(n,1,2,3);

}