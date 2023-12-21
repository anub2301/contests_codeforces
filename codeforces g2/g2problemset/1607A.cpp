#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int sum=0;
        char a[50];
        char b[50];
        for(int i=0;i<50;i++){
            cin>>a[i];
        }
        for(int i=0;i<50;i++){
            cin>>b[i];
        }for(int i=0;i<50;i++){
            for(int j=0,k=0;j<50,k<50;j++,k++){
                if(b[i+1]==a[j]&&b[i]==a[j+k]){
                    sum+=abs(k);
                }
            }
        }
        cout<<sum<<endl;
    }
return 0;
}