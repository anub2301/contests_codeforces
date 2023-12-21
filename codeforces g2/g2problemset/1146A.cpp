#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int cnt =0;
    
    string s;
    cin>>s;
    int n= s.size();
    for(int i=0;i<n;i++){
        if(s[i]=='a'){
            cnt++;
        }
    }
    cout<<min(n,(2*cnt-1))<<endl;
}