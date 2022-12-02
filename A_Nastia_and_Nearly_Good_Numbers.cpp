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
    long long int m,n;cin>>m>>n;
    if(n==1){
        cout<<"NO";
    }
    else if(n==2){
        cout<<"YES"<<endl;
        cout<<(2*m)<<" "<<m<<" "<<(3*m);
    }
    else{
        cout<<"YES"<<endl;
        cout<<(m*(n-1))<<" "<<m<<" "<<(m*n);
    }
    // long long int a = 1000000,b = 1000000;
    // // long long int c = a*b;
    // cout<<a*b;
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