#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define read(arr,n) for(int i=0;i<n;i++) cin>>arr[i];
// typedef long long ll;
// typedef unsigned long long int usl;
// const ll N=1e5 + 2;
// ll mod(ll a){
//     if(a<0)
//     return -1*a;
//     return a;
// }
// ll gcd(ll a,ll b){
//     return (b==0) ? (a) : (gcd(b,a%b));
// }
void func1(){
    int n;cin>>n;
    int arr[n][n];
    rep(i,0,n){
        rep(j,0,n){
            arr[i][j] = 0;
        }

    }

    int adder = 1;
    int count = 1;
    int i=0,j=0;
    int go_down = 1;
    int term = 1;
    while(term<=(n*n)){
        if(j==n-1 && go_down==1){
            if(term%2 != 0){
                arr[i][j]=count;
                term++;
            }
            else{
                arr[i][j] = (n*n)-count+1;
                term++;
                count++;
            }
            go_down = 0;
            i++;
            adder = -1;
        }
        else if(j==0 && go_down==0){
            if(term%2 != 0){
                arr[i][j]=count;
                term++;
            }
            
            else{
                arr[i][j] = (n*n)-count+1;
                count++;term++;
            }
            go_down=1;
            i++;
            adder = 1;
        }
        else{
            if(term%2 != 0){
                arr[i][j]=count;
                term++;
            }
            else{
                arr[i][j] = (n*n)-count+1;
                count++;
                term++;
            }
            j+=adder;
        }
    }
    



    rep(i,0,n){
        rep(j,0,n){
            cout<<arr[i][j];
            if(j!=n-1)
            cout<<" ";
        }
        if(i!=n-1){
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