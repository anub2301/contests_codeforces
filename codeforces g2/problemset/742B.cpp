#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,x,cnt=0;
    cin>>n>>x;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
        
            if(a[i]^a[j]==x){
                cnt++;
            }
        }
    }
    cout<<cnt<<endl;

return 0;
}