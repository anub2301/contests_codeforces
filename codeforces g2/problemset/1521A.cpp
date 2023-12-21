#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int s = a+2*b+3*c;
        if(s%2==0){
            cout<<0<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }
return 0;
}