#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(long long int i=a;i<b;i++)
#define read(arr,n) for(long long int i=0;i<n;i++) cin>>arr[i];
const long long int N=1e5 + 2;
long long int mod(long long int a){
    if(a<0)
    return -1*a;
    return a;
}
long long int gcd(long long int a,long long int b){
    return (b==0) ? (a) : (gcd(b,a%b));
}
void func1(){
    vector<pair<long long int,long long int>> v;
    long long int n;cin>>n;
    rep(i,0,n){
        pair<long long int,long long int> p;
        cin>>p.first;
        p.second = i+1;
        v.push_back(p);
    }
    long long int count = 0;
    sort(v.begin(),v.end());
    // rep(i,0,n){
    //     cout<<v[i].first<<" ";
    // }
    rep(i,0,n){
        rep(j,i+1,n){
            if(((v[i].first)*(v[j].first)) > (2*n)){
                break;
            }
            if(((v[i].first)*(v[j].first)) == ((v[i].second)+(v[j].second))){
                count++;
            }
        }
    }
    cout<<count;
}
int main(){
    long long int t;
    t=1;
    cin>>t; //for single test case remove it
    while(t--){
        func1();
        if(t!=0)
        cout<<endl;
    }
    return 0;
}