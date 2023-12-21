#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char c;
        cin>>c;
       
        for(int i=0;i<10;i++){
            if( c== 'c'||c=='o'||c=='d'||c=='e'||c=='f'||c=='o'||c=='r'||c=='s'){
                cout<<"YES"<<endl;
                break;
            }
            else {
                cout<<"NO"<<endl;
                break;
            }
        }
    }
return 0;
}