#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int msbPos(ll n){ 
    int msb_p = -1; 
    while (n){ 
        n = n>>1; 
        msb_p++; 
    } 
    return msb_p; 
}
ll andOperator(ll x, ll y){ 
    ll res = 0;
    while (x && y){
        int msb_p1 = msbPos(x); 
        int msb_p2 = msbPos(y);
        if (msb_p1 != msb_p2) break;
        ll msb_val =  (1 << msb_p1); 
        res = res + msb_val; 
        x = x - msb_val; 
        y = y - msb_val; 
    }
    return res; 
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        int n, ctr = 0;
        cin>>n;
        ll arr[n];
        for(int i = 0; i < n; i++)  cin>>arr[i];
        for(int i = 0; i < n - 1; i++){
            for(int j = i + 1; j < n; j++){
                if((arr[j]&arr[i]) == arr[i]) ctr++;
            }
        }
        cout<<ctr<<endl;
    }
}