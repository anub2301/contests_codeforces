#include<bits/stdc++.h>
using namespace std;
 
string str;
 
int func(string sub){
    int count=0,max=0;
 
    for(int i=0;i<str.size()-1;i++){
        if(str[i]==sub[0] && str[i+1]==sub[1])
            count++;
    }
    return count;
}
main(){
    int max=0,n;
    string gram;
    cin>>n;
    cin>>str;
    for(int i=0;i<str.size()-1;i++){
        string sub= str.substr(i,2);
 
        int temp= func(sub);
 
        if(temp>max){
            max= temp;
            gram= sub;
        }
    }
    cout<<gram<<endl;
}