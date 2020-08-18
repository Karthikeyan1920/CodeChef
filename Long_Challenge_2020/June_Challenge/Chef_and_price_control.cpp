#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n, k, actual = 0, cutoff = 0;
        cin>>n>>k;
        ll arr[n];
        for(ll i = 0; i < n; i++){
            cin>>arr[i];
            actual += arr[i];
            if(arr[i] > k)  cutoff += k;
            else    cutoff += arr[i];
        }
        cout<<actual - cutoff<<endl;
    }
}