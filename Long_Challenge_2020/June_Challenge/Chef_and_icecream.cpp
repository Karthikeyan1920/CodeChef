#include<bits/stdc++.h>
typedef long long ll;
using namespace std;
string change(ll *arr, ll n){
    int block[15];
    block[5] = 1;
    block[10] = 0;
    block[15] = 0;
    for(ll i = 1; i < n; i++){
        if(arr[i] == 10){
            if(block[5])    block[5]--;
            else    return "NO";
            block[10]++;
        } 
        else if(arr[i] == 15){
            if(block[10])   block[10]--;
            else if(block[5] >= 2)  block[5] -= 2;
            else    return "NO";
            block[15]++;
        }
        else    block[5]++;
    }
    return "YES";
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll arr[n], sum = 0;
        for(ll i = 0; i < n; i++){
            cin>>arr[i];
        }
        if(arr[0] == 5){
            cout<<change(arr, n)<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}