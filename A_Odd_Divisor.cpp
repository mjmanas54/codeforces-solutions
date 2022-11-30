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
    long long int n;cin>>n;
    rep(i,1,47){
        if(pow(2,i) == n){
            cout<<"NO";
            return;
        }
    }
    cout<<"YES";
    return;
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