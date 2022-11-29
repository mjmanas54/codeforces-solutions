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
    int n,k;cin>>n>>k;
    int count = 0;
    if(n<(2*k-1)){
        cout<<-1;
    }
    
    else{
        rep(i,0,n){
            rep(j,0,n){
                if(i==j && (i%2 == 0) &&(count<k)){
                    cout<<"R";
                    count++;
                }
                else{
                    cout<<".";
                }
            }
            if(i != n-1)
            cout<<endl;
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