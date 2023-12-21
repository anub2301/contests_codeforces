#include<iostream>
#include<bits/stdc++.h>
using namespace std;


int main(){
    int n,goal(0);
    cin>>n;
    string s1,s2;
    while(n--){
        if(goal!=0){
            cin>>s1;
        
            if(s1==s2){
                goal+=1;
            }
            else{
                goal-=1;
            }
        }
        else{
            cin>>s2;
            goal=1;
        }
    }

    cout<<s2;
return 0;
}