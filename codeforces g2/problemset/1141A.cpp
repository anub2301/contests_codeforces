#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m,cnt=0;
    cin>>n>>m;
    int p = m/n;
    if(m%2!=0&&m%3!=0){
        cout<<-1;
       
    }
    else if(m/n<n&&m/n!=1){
        cout<<-1;
    }
    else if(p==1){
        cout<<0;
    }
    else{

        while(p!=1){
            if(p%3==0){
                p=p/3;
                cnt++;
            }
            else if(p%2==0){
                p=p/2;
                cnt++;
            }
        }
            cout<<cnt<<endl;
    }
    
return 0;
}