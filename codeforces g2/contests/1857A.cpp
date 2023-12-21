#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int cnt =0;
        int cnt1 =0;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                cnt+=a[i];
            }
            else{
                cnt1+=a[i];
            }
        }
        if((cnt%2==0&&cnt1%2==0)||(cnt%2!=0&&cnt1%2!=0)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
return 0;
}