#include<bits/stdc++.h>
using namespace std;
typedef unsigned long long ll;
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll n, k, inp, root = 0;
        ll min = INT_MAX;
        bool flag = true;
        cin>>n>>k;
        for(ll i = 0; i < n; i++){
            cin>>inp;
            if(inp > k) inp = 0;
            if(inp){
                if(k % inp == 0){
                    if(k / inp < min){
                        min = k / inp;
                        root = inp;
                    }
                    if(inp == k){
                        cout<<inp<<endl;
                        flag = false;
                    }
                }
            }
        }
        root ? cout<<root<<endl : cout<<"-1"<<endl;
    }
}