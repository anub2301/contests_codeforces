#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,a,b,sum,cnt=0;
    cin>>n>>a>>b;
    int c[n];
    for(int i=n-1;i>0;i--){
        cin>>c[i];
        sum+=c[i];
    }
    sort(c,c+n);
    for(int i=0;i<n;i++){
       
       if((a*c[i]/sum)<b){
            sum-=c[i];
            cnt++;
            
        }
        else{
            break;
            
        }
    }
    cout<<cnt<<endl;
return 0;
}