#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int a[2][2];
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            cin>>a[i][j];
        }
    }
    sort(a,a+2);
    for(int i=0;i<2;i++){
       
            if(a[i][0]+a[i][1]==a[0][1]||a[i][0]+a[i][1]==a[1][1]){
                cout<<"Yes"<<endl;
            }
            else{
                cout<<"No"<<endl;
            }

        
    }

    }
return 0;
}