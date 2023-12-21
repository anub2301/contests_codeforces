#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    int ch[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>ch[i][j];
        }
    }
    int flag =0;
    int x1=0,x2=0,x3=0,x4=0;

    for(int j=0;j<m;j++){
        for(int i=0;i<n;i++){
            if(ch[i][j]=='v'&&x1==0){
                x1=1;
                break;==0){
                x2=1;
            }
            if(ch[i][j]=='i' && x1==1 && x2
                break;
            }
            if(ch[i][j]=='k' && x2==1 && x3==0){
                x3=1;
                break;
            }
            if(ch[i][j]=='a' && x3==1 && x4==0){
                x4=1,flag=1;
                break;
            }
        }
    }
            if(flag==1)
                cout<<"YES\n";
                else cout<<"NO\n";

    }

return 0;
}
