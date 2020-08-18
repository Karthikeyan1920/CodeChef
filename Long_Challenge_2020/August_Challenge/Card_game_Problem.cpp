#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
int countdig(ll num, int ctr){
    if(!num)    return ctr;
    else{
        ctr++;
        return countdig(num/10, ctr);
    }    
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        ll chef_pow, rick_pow;
        cin>>chef_pow>>rick_pow;
        if(rick_pow <= 9)   cout<<1<<" "<<1<<endl;
        else{
            if(chef_pow <= 9)   cout<<0<<" "<<1<<endl;
            else{
                (chef_pow % 9) ? chef_pow = chef_pow / 9 + 1 : chef_pow = chef_pow / 9;
                (rick_pow % 9) ? rick_pow = rick_pow / 9 + 1 : rick_pow = rick_pow / 9;
                (rick_pow <= chef_pow) ? cout<<1<<" "<<rick_pow<<endl : cout<<0<<" "<<chef_pow<<endl; 
            }
        }
    }
}