#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll powerx(ll power, ll total){
    total += power;
    if(power == 0)  return total;
    else    return powerx(power/2, total);
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll health, power;
        cin>>health>>power;
        cout<<powerx(power, 0);
        if(health <= powerx(power, 0))  cout<<1<<endl;
        else    cout<<0<<endl;
    }
}