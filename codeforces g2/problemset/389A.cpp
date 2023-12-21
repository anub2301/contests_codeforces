#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int cnt = 0;
    while(n>0){
        int a[n];
        
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(a[i>a[j]]){
                    a[i]-=a[j];
                    cnt++;
                }
            }
        }
    }
    cout<<cnt<<endl;
return 0;
}