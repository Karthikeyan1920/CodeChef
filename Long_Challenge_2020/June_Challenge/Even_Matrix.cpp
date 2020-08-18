#include <bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        vector<ll> arr;
        cin>>n;
        if(n == 1) {
            cout<<1<<"\n";
        }
        else{
        for(ll i = 1; i <= n; i++) arr[i] = i;
        ll row = 0;
        while(row < n){
            if(row % 2){
                for(ll i = n-1; i >= 0; i--){
                    cout<<(row*n) - i<<" ";
                }
            }
            else{
                for(ll j = 0; j < n; j++){
                    cout<<(row*n)- j<<" ";
                }
            }
            cout<<"\n";
            row++;
        }
        }
    }
}