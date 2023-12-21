#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    long long int l,r;
    cin>>l>>r;
    
    if(l+2<=r&&l%2==0){
        cout<<l<<" "<<l+1<<" "<<l+2<<endl;
    }
    else if(l+3<=r&&l%2==1){
        cout<<l+1<<" "<<l+2<<" "<<l+3<<endl;
        
    }
    else {
        cout<<-1;
    }
return 0;
}