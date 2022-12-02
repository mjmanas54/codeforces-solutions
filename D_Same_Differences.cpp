#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define read(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
const int N=2e5 + 2;
int mod(int a){
    if(a<0)
    return -1*a;
    return a;
}
int gcd(int a,int b){
    return (b==0) ? (a) : (gcd(b,a%b));
}
void func1(){
    long long int n;cin>>n;
    long long int arr[n];
    read(arr,n);
    unordered_map <long long int,long long int> um;
    rep(i,0,n){
        um[arr[i]-i]++;
        // cout<<um[arr[i]-i];
    }
    long long int count = 0;
    for(auto x: um){
        long long int a = x.second;
        // cout<<a<<" ";
        count += (a*(a-1))/2;
    }
    cout<<count;
}
int main(){
    int t;
    t=1;
    cin>>t; //for single test case remove it
    while(t--){
        func1();
        if(t!=0)
        cout<<endl;
    }
    return 0;
}