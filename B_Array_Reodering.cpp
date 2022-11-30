#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(int i=a;i<b;i++)
#define vec vector<int>
#define read(arr,n) for(int i=0;i<n;i++){int a;cin>>a;arr.push_back(a);}
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
    vec v;
    read(v,n);
    vector<int> even;
    vector<int> odd;
    rep(i,0,n){
       if(v[i]%2 == 0){
        even.push_back(v[i]);
       }
       else{
        odd.push_back(v[i]);
       }
    }
    int s = even.size();
    int ans = ((n*s)-((s*(s+1))/2));
    rep(i,0,odd.size()){
        rep(j,i+1,odd.size()){
            if(gcd(odd[i],odd[j])>1){
                ans++;
            }
        }
    }
    cout<<ans;

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