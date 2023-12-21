#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,cnt=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    cnt+=a[0]+1;
    for(int i=0;i<n;i++){
        if(a[i+1]>a[i]){
            cnt+=(1+(a[i+1]-a[i]));

        }
        else if(a[i+1]<a[i]){
            cnt+=((a[i]-a[i+1])+1);

        }
        else{
            cnt+=2;
        }

    }
    cout<<cnt<<endl;
return 0;
}