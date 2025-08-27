#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        unordered_map<char,int>mp;
        for(int i = 0;i<n;i++){
            mp[s[i]]++;
        }
        int oddCount = 0;
        for(auto &p :mp){
            if(p.second%2 != 0) oddCount++;
        }
        int remainLen = n-k;
        if(oddCount <= (remainLen%2) + k){
            cout<<"YES\n";
        }else{
            cout<<"NO\n";
        }
    }
return 0;
}