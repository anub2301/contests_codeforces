#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int d;
    cin>>d;
    while(d--){
        string p;
        cin>>p;
        for(int i=0;i<p.size();i++){
            if(p[0]=='a'||p[1]=='b'||p[2]=='c'){
                cout<<"YES"<<endl;
                break;
            }
            else{

                cout<<"NO"<<endl;
                break;
            }
        }
    }
return 0;
}