#include<bits/stdc++.h>
using namespace std;
typedef signed long long int ll;
ll finddir(string str, char ele){
    ll lctr = 0, rctr = 0, uctr = 0, dctr = 0;
    for(ll i = 0; str[i] != '\0'; i++){
        if(str[i] == 'L')   lctr++;
        if(str[i] == 'D')   dctr++;
        if(str[i] == 'U')   uctr++;
        if(str[i] == 'R')   rctr++;
    }
    switch(ele){
        case 'L':
            return lctr;
        case 'U':
            return uctr;
        case 'R':
            return rctr;
        case 'D':
            return dctr;
    }
    return 0;
}
int main(){
    ll tc;
    cin>>tc;
    while(tc--){
        ll x1, y1, x2, y2, n;
        string str;
        cin>>str;
        cin>>x1>>y1;
        cin>>n;
        while(n--){
            cin>>x2>>y2;
            int flag = 1;
            ll rightctr = 0, leftctr = 0, upctr = 0, downctr = 0;
            (x1 > x2) ? leftctr = x1 - x2 : rightctr = x2 - x1;
            (y1 > y2) ? downctr = y1 - y2 : upctr = y2 - y1;
            if(finddir(str, 'L') < leftctr || finddir(str, 'D') < downctr || finddir(str, 'R') < rightctr || finddir(str, 'U') < upctr){
                cout<<"NO"<<endl;
                flag = 0;
            }
            //cout<<upctr<<" "<<downctr<<" "<<rightctr<<" "<<leftctr<<endl;
            string out = "";
            for(ll i = 0; str[i] != '\0'; i++){
                if((leftctr == 0) && (downctr == 0) && (rightctr == 0) && (upctr == 0))   break;
                else{
                    switch(str[i]){
                        case 'L':
                            if(leftctr > 0){
                                leftctr--;
                                out += 'L';
                            }
                            break;   
                        case 'R':
                            if(rightctr > 0){
                                rightctr--;
                                out += 'R';
                            }
                            break;
                        case 'U':
                            if(upctr > 0){
                                upctr--;
                                out += 'U';
                            }
                            break;
                        case 'D':
                            if(downctr > 0){
                                downctr--;
                                out += 'D';
                            }
                            break;
                    }
                }
                /*if(leftctr) if(str[i] == 'L'){
                    leftctr--;
                    out += 'L';
                }
                if(rightctr) if(str[i] == 'R'){
                    rightctr--;
                    out += 'R';
                }
                if(upctr) if(str[i] == 'U'){
                    upctr--;
                    out += 'U';
                }
                if(downctr) if(str[i] == 'D'){
                    downctr--;
                    out += 'D';
                }*/
            }
            if(flag){
                cout<<"YES"<<" "<<out.length()<<endl;
            }
        }
    }
}