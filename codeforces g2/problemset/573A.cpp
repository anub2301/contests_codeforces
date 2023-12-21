#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    int a[n];
   
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
     for(int i=0;i<n;i++){
        if(a[n-1]%a[i]==0){
            cout<<"Yes"<<endl;
            break;
        }
        else{
            cout<<"No"<<endl;
            break;
        }
       
    }

return 0;
}