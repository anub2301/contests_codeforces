#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    int a[n],b[n];
    for(int i=0;i<n;i++){
        cin>>a[i]>>b[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((abs(a[i]-a[j])+abs(b[i]-b[j]))==(sqrt(pow((a[i]-a[j]),2)+pow((b[i]-b[j]),2)))){
                cnt++;
            }
            
        }
        
        
    }
    cout<<cnt<<endl;
return 0;
}