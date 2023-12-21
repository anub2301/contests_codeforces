#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,sum=0;
        cin>>n;
        for(int i=1,j=0;i<=n,j<=n;i++,j++){
            if(i!=pow(2,j))
            sum+=i;
        }
         for(int i=1,j=0;j<n,i<=n;i++,j++){
            if(i==pow(2,j));
            sum-=i;
        }

        cout<<sum<<endl;
    }
return 0;
}