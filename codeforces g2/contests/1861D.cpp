#include<iostream>
#include<bits/stdc++.h>
using namespace std;

bool is_sorted(int a[],int n){
    for(int i=0,j=1;i<n,j<n;i++,j++){
  
        if(a[i]>=a[j])
            return false ;
            else 
            return true;
        
    }

}
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0,j=1;i<n,j<n;i++,j++){
            if(a[i]<a[j])
            is_sorted();
            else{
                
            }
        }

    }    
return 0;
}