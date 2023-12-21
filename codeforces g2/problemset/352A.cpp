#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt5=0,cnt0=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]==5){
            cnt5++;
        }
        else{
            cnt0++;
        }
    }
    if(cnt0>=1&&cnt5/9>=1){
        for(int i=0;i<(cnt5/9)*9;i++){
            cout<<5;
        }
        for(int i=0;i<cnt0;i++){
            cout<<0;
        }
         cout<<endl;
    }
    else if (cnt0>0&&cnt5<9){
        cout<<0<<endl;
    }
    else {
        cout<<-1<<endl;
    }
   
    
return 0;
}