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
    ll arr[n];
    read(arr,n);
    sort(arr,arr+n,greater<ll>());
    bool a=1;
    rep(i,0,n){
        if(arr[i]!=arr[0]){
            a = 0;
        }
    }
    if(a){
        cout<<"NO";
        return;
    }
    if(arr[0] == arr[1]){
        rep(i,0,n){
            if(arr[i]!=arr[1]){
                int temp = arr[i];
                arr[i] = arr[1];
                arr[1] = temp;
            }
        }
    }
    cout<<"YES"<<endl;
    rep(i,0,n){
        cout<<arr[i];
        if(i!=n){
            cout<<" ";
        }
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