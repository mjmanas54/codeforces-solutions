#include"bits/stdc++.h"
using namespace std;
#define rep(i,a,b) for(ll i=a;i<b;i++)
#define read(arr,n) for(ll i=0;i<n;i++) cin>>arr[i];
typedef long long ll;
typedef unsigned long long int usl;
const ll N=1e5 + 2;
ll mod(ll a){
    if(a<0)
    return -1*a;
    return a;
}
ll gcd(ll a,ll b){
    return (b==0) ? (a) : (gcd(b,a%b));
}
bool sortbysec(const pair<pair<int,int>,int> &a,const pair<pair<int,int>,int> &b){
    return (a.second < b.second);   //sort in the increasing order of the second elements of the pairs
}
void func1(){
    int n,m;cin>>n>>m;
    vector<pair<pair<int,int>,int>> v;
    rep(i,0,n){
        int a;cin>>a;
        v.push_back(make_pair(make_pair(a,0),i));
    }
    sort(v.begin(),v.end());
    // rep(i,0,n){
    //     cout<<v[i].first.first<<" "<<v[i].second<<endl;
    // }
    // cout<<endl;
    int rem = m;
    int pos=0;
    rep(i,0,n){
        if(rem>=v[i].first.first){
            rem-=v[i].first.first;
            v[i].first.second = 1;
            pos=v[i].second;
        }
        else{
            break;
        }
    }
    sort(v.begin(),v.end(),sortbysec);
    //  rep(i,0,n){
    //     cout<<v[i].first.second<<" "<<v[i].second<<endl;
    // }
    // cout<<endl;
    // cout<<endl;
    // vector<pair<int,int>> pos;
    // rep(i,0,n-1){
    //     if((v[i].first.second==1)&&(v[i+1].first.second==0)){
    //         if((v[i].first.first)+rem >= v[i+1].first.first){
    //             pos.push_back(make_pair(((v[i].first.first)-v[i+1].first.first),i));
    //         }
    //     }
    // }
    // rep(i,0,pos.size()){ //
    //     cout<<pos[i].first<<" "<<pos[i].second<<endl;
    // }
    // cout<<endl;
    // rep(i,0,n){
    //     cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<endl;
    // }
    // cout<<endl;//
    // sort(pos.begin(),pos.end());
    // rep(i,0,pos.size()){
    //     if(rem-pos[i].first >= 0){
    //         v[pos[i].second].first.second = 0;
    //         v[pos[i].second+1].first.second = 1;
    //     }
    // }
    // rep(i,0,pos.size()){ //
    //     cout<<pos[i].first<<" "<<pos[i].second<<endl;
    // }
    // cout<<endl;
    // rep(i,0,n){
    //     cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<endl;
    // }
    // cout<<endl;//
    int my_point = 0;
    rep(i,0,n){
        if(v[i].first.second == 1){
            my_point++;
            v[i].first.second = i;
        }
        else{
            v[i].first.second = i+1;
        }
    }
    // cout<<my_point<<endl;//
    // rep(i,0,pos.size()){ //
    //     cout<<pos[i].first<<" "<<pos[i].second<<endl;
    // }
    // cout<<endl;
    // rep(i,0,n){
    //     cout<<v[i].first.first<<" "<<v[i].first.second<<" "<<v[i].second<<endl;
    // }
    // cout<<endl;//
    // int my_pos = n+1;
    
    // rep(i,0,n){
    //     if(v[i].first.second < my_point){
    //         my_pos--;
    //     }
    //     // else if(v[i].first.second==my_point){
    //     //     if((i==0)||(v[i-1].first.second != my_point)){
    //     //         my_pos--;
    //     //     }
    //     // }
    //     else{
    //         break;
    //     }
    // }
    // cout<<my_pos<<endl;
    // cout<<my_point<<" "<<pos<<" "<<rem<<endl;
    if(my_point==n){
        cout<<1;
    }
    else if(my_point==0){
        cout<<n+1;
    }
    else if((v[pos].first.first)+(rem)>=v[my_point].first.first){
        cout<<n-my_point;
    }
    else{
        cout<<n-my_point+1;
    }
}
int main(){
    ll t;
    t=1;
    cin>>t; //for single test case remove it
    while(t--){
        func1();
        if(t!=0)
        cout<<endl;
    }
    return 0;
}