#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cntl=0,cntr=0;
    cin>>n;
    while(n--){
        int x,y;
        cin>>x>>y;
        if(x<0){
            cntl++;
        }
        else if(x>0){
            cntr++;
        }
        
        
    }
    if(min(cntr,cntl)<2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
return 0;
}