#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int test;
    cin>>test;
    while(test--){
        int b[3];
        for(int i=0;i<3;i++){
            cin>>b[i];
        }
        sort(b,b+3);
        for(int i=0;i<3;i++){
            if((b[1]/b[0])-1+(b[2]/b[0])-1<=3&&(b[1]%b[0]==0)&&(b[2]%b[0]==0)){
                cout<<"Yes"<<endl;
                break;
            }
            else{
                cout<<"No"<<endl;
                break;
            }
        }
    }
return 0;
}