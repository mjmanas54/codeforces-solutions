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
    int n,a,b;cin>>n>>a>>b;
    string s;
    cin>>s;
    int c1 = 0,c0 = 0;
    if(b<0){
        char val;
        if(s[0] == '0'){
            val = '1';
        }
        else{
            val = '0';
        }
        rep(i,0,n){
            if(s[i] != val){
                if(s[i] == '0'){
                    c0++;
                    val = '0';
                }
                else{
                    c1++;
                    val = '1';
                }
            }
        }
        int mn = min(c1,c0);
        cout<<((n*a)+(mn+1)*b);
    }
    else{
        cout<<(n*(a+b));
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