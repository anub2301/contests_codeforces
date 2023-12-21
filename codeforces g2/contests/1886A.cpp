#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        if(n<=9){
            cout<<"NO"<<endl;

        }
        else if(n>9&&n%3!=0){
            cout<<"YES"<<endl;
            cout<<1<<" "<<2<<" "<<n-3<<endl;
        }
        else if(n>9&&n%3==0){
            cout<<"YES"<<endl;
            cout<<2<<" "<<5<<" "<<n-7<<endl;
        }
    }
return 0;
}