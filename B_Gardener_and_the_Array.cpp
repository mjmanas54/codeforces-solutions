#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define read(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
typedef long long ll;
typedef unsigned long long int usl;
const ll N=1e5 + 2;
ll mod(ll a){
    if(a<0)
    return -1*a;
    return a;
}
ll gcd(ll a,ll b){
    return (b==0) ? (a) : (gcd(b,a%b));
}
bool sortbysec(const pair<int,int> &a,const pair<int,int> &b){
    return (a.second < b.second);   //sort in the increasing order of the second elements of the pairs
}
void func1(){
    
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