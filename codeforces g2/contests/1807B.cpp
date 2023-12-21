#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int even_sum=0;
        int odd_sum =0;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            if(a[i]%2==0){
                even_sum+=a[i];
            }
            else{
                odd_sum+=a[i];
            }
        }
        if(odd_sum<even_sum){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }
return 0;
}