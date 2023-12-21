#include<iostream>
#include<bits/stdc++.h>
using namespace std;

long long int fact(int n){
    long long int ans =1;

    if(n==0||n==1){
        return 1;
    }
    for(int i =1;i<=n;i++){
        ans= ans*i;
    }
    return ans;
}

int main(){
    
    int a,b;
    cin>>a>>b;
    cout<<(fact(b)/fact(a))%10<<endl;
return 0;
}