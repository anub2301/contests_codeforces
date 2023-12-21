#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int cnt1=0;
        int cnt2=0;
        string s;
        cin>>s;
        
        for(int i=0;i<s.size()-3;i++){
            cnt1+=s[i];
        }
        for(int i=3;i<s.size();i++){
            cnt2+=s[i];
        }
        if(cnt1==cnt2){
            cout<<"YEs"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}