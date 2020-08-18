#include<bits/stdc++.h>
typedef unsigned long long ll;
using namespace std;
bool isPowerOfTwo(ll n) {
    if(n==0)    return false;
    return (ceil(log2(n)) == floor(log2(n)));
}
ll nof2(ll n, ll count){
    if(n/2 % 2 == 0){
        n/=2;
        count++;
        return nof2(n, count);
    }
    else    return count;
}
ll gamex(ll ts){
    ll ctr = 0;
    ll u = nof2(ts, 0);
    ll k = u + 1;
    k = pow(2, k);
    for(ll i = k; i < ts; i+=2){
        if(nof2(i, 0) > nof2(ts, 0))    ctr++;
    }
    return ctr;
}
ll game(ll ts, ll i, ll ctr){
    ll k, l;
    if(i < ts){
        k = i;
        l = ts;
        while(l % 2 == 0 && k % 2 == 0){
            k /= 2;
            l /= 2;
        }
        if((k % 2 == 0) && (l % 2) && (k)){
            ctr++;
        } 
        return game(ts, i+2, ctr);
    }
    else  return ctr;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n;
        cin>>n;
        ll k, i, ctr = 0;
        if(n % 2) cout<<(n-1)/2<<endl;
        else{
            if(isPowerOfTwo(n)) cout<<0<<endl;
            else{
                k = nof2(n, 0) + 1;
                i = k * 2 * 2;
                if(n % i == 0)  cout<<((n - (n % i) - i)/i)<<endl;
                else    cout<<((n - (n % i) - i)/i) + 1<<endl;
            }
        }
    }
}