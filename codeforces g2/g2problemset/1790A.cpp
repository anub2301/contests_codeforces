#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt =0;
        string s1;
        cin>>s1;
        string s  = "31415926535897932384626433832";
        for(int i=0;i<n;i++){
            while(s1[i]==s[i]){
                cnt++;
            }
        }
        cout<<cnt<<endl;
    }
return 0;
}