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
    ll n,k;cin>>n>>k;
    ll arr[n];
    read(arr,n);
    ll arr1[n];
    rep(i,0,n){
        arr1[i] = arr[i];
    }
    sort(arr1,arr1+n);
    int count = 0;
    int count1 = 1;
    int sorted=1;
    for(ll i = n-1;i>-1;i--){
        
        if(count1 == k){
            if(sorted ==0){
                count++;
            }
            count1 = 0;
            sorted = 1;
            i++;continue;
        }
        if((arr[i]!=arr1[i])){
            sorted = 0;
        }
        count1++;
    }
    cout<<count;

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