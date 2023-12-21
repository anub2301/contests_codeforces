#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        int sum =0;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n-1;i++){
            if(a[i]<0){
                if(a[i-1]<=a[i+1]){
                    a[i]*=-1;
                    a[i-1]*=-1;
                }
                else{
                    a[i]*=-1;
                    a[i+1]*=-1;
                }
                sum+=a[i];
            }
        }
        cout<<sum<<endl;
    }
return 0;
}