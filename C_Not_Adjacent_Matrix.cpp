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
void func1(){
    ll n;cin>>n;
    ll arr[n][n];
    ll i=0,j=0;
    ll count =1;
    if(n==2){
        cout<<-1;
        return;
    }
    while(count<=(n*n)){
        arr[i][j] = count;
        if(i==n-1 || j==n-1){
            if(j==n-1){
                ll temp = n-i;
                i = temp;
                j=0;
            }
            else{
                ll temp = n-1-j;
                i = 0;j = temp;
            }
            i--;j--;
        }
        i++;j++;
        count++;
    }
    rep(i,0,n){
        rep(j,0,n){
            cout<<arr[i][j];
            if(j!=n-1)
            cout<<" ";
        }
        if(i!=n-1)
        cout<<endl;
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