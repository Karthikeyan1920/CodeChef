#include<bits/stdc++.h>
using namespace std;
bool compare(string a, string b){
    return (a+b < b+a);
}
string lexSmallest(vector<string> a, int n){
    sort(a.begin(), a.end(), compare);
    string answer = "";
    for (int i = 0; i < n; i++) answer += a[i]; 
    return answer; 
}
string getString(char x){
    string s(1, x);
    return s;
}
int main(){
    int tc;
    cin>>tc;
    while(tc--){
        string s, p;
        cin>>s>>p;
        int k = INT_MAX, flag = 1;
        vector<int> arr(150, 0);
        sort(s.begin(), s.end());
        flag = p.at(0);
        for(int i = 0; i < s.size(); i++){
            arr[s.at(i)]++;
        }
        for(int i = 0; i < p.size(); i++){
            arr[p.at(i)]--;
        }
        vector<string> one;
        for(int i = 0; i < 150; i++){
            if(arr[i])  for(int j = 0; j < arr[i]; j++){
                one.push_back(getString(char(i)));
            }
        }
        one.push_back(p);
        cout<<lexSmallest(one, one.size())<<endl;
    }
}