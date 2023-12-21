#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        n=s.size();
        for(int i=0;i<n/2;i++){
            if((s[0]=='0'&&s[s.size()-1]=='1')||(s[0]=='1'&&s[s.size()-1]=='0')){
                s.erase(0,1);
                s.erase(s.size()-1,1);
                
                
            }
        }
        cout<<s.size()<<endl;
    }
return 0;
}