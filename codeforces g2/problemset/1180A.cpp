#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n==1){
        cout<<1<<endl;
    }
    
    else {
        cout<<2*n*n-2*n+1<<endl;
    }
return 0;
}