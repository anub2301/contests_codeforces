#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    if(n%3==0&&n!=3){
        cout<<((n/3)+1)<<" "<<((n/3)-1)<<" "<<n/3<<endl;

    }
    else if(n%3==1){
        cout<<n/3<<" "<<n/3<<" "<<n-(2*n/3)<<endl;

    }
    else if(n%3==2){
        cout<<n/3<<" "<<n/3<<" "<<n-(n/3)-n/3<<endl;

    }
    else if(n%3==0&&n==3){
        cout<<1<<" "<<1<<" "<<1<<endl;
    }
return 0;
}