#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define read(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
#define swap(a,b) int temp = a; a = b; b = temp;
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
    unsigned long long n,m;cin>>n>>m;
    if(n==m){
        cout<<0<<" "<<0;
    }
    else{
        if(n>m){
            swap(n,m);
        }
        unsigned long long k = m-n;
        cout<<k<<" ";
        int x = n/k;
        unsigned long long diff1 = ((x+1)*k - n);
        unsigned long long diff2 = (n-(k*x));
        if(diff1<diff2){
            cout<<diff1;
        }
        else{
            cout<<diff2;
        }
    }
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