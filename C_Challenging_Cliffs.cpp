#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define read(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
const int N=1e5 + 2;
int mod(int a){
    if(a<0)
    return -1*a;
    return a;
}
int gcd(int a,int b){
    return (b==0) ? (a) : (gcd(b,a%b));
}
void func1(){
    int n;cin>>n;
    int arr[n];
    read(arr,n);
    sort(arr,arr+n);
    int min_dif = INT_MAX;
    int idx;
    rep(i,0,n-1){
        if(min_dif>(arr[i+1]-arr[i])){
            min_dif=(arr[i+1]-arr[i]);
            idx = i;
        }
        min_dif = min(min_dif,(arr[i+1]-arr[i]));
    }
    if(min_dif == (arr[1]-arr[0])){
        cout<<arr[0]<<" ";
        rep(i,2,n){
            cout<<arr[i]<<" ";
        }
        cout<<arr[1];
        return;
    }
    if(min_dif == (arr[n-1]-arr[n-2])){
        cout<<arr[n-2]<<" ";
        rep(i,0,n-2){
            cout<<arr[i]<<" ";
        }
        cout<<arr[n-1];
        return;
    }
    cout<<arr[idx]<<" ";
    rep(i,idx+2,n){
        cout<<arr[i]<<" ";
    }
    rep(i,0,idx){
        cout<<arr[i]<<" ";
    }
    cout<<arr[idx+1];
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