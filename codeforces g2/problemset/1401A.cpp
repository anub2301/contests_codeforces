#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        if(n>k+1){
            cout<<0<<endl;
        }
        else{
            cout<<abs(k-n)<<endl;
        }
    }
return 0;
}