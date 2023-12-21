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
        while(n%6==0){
            n= n/6;
            cnt++;
        }
        cout<<cnt<<endl;

    }
return 0;
}