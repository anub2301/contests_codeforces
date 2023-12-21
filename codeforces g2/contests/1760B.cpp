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
        n=s.size();
        cin>>s;
        sort(s.begin(),s.end());
        cout<<int(s[s.size()-1])-96<<endl;

    }
return 0;
}