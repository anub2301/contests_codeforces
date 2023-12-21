#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    long long int n,sum=0;
    cin>>n;
    for(int i=1;i<=n%10;i++){
        sum+=pow(i,n);
    }
    cout<<sum%5<<endl;


return 0;
}