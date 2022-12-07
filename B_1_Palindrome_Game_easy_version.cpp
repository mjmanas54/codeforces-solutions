#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define read(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
typedef long long ll;
const ll N=1e5 + 2;
ll mod(ll a){
    if(a<0)
    return -1*a;
    return a;
}
ll gcd(ll a,ll b){
    return (b==0) ? (a) : (gcd(b,a%b));
}
void func1(){
    ll n;cin>>n;
    string s;cin>>s;
    ll c1=0,c0=0;
    rep(i,0,n){
        if(s[i]=='0'){
            c0++;
        }
        else{
            c1++;
        }
    }
    ll a_alice=0,a_bob=0;
    bool turn=0; //if 0 then alice and if 1 then bob's turn
    bool prev_op=0; //if 0 then prev operation was reverse

    if((c0%2 == 0)||(c0==1)){
        cout<<"BOB";
    }
    else{
        cout<<"ALICE";
    }

}
int main(){
    ll t;
    t=1;
    cin>>t; //for single test case remove it
    while(t--){
        func1();
        if(t!=0)
        cout<<endl;
    }
    return 0;
}