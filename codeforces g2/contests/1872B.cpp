#include<iostream>
#include<math.h>
using namespace std;
int main(){
int t;
cin>>t;
for(int i=0;i<t;i++){
    int n;
    cin>>n;
    int m=500;
    for(int j=0;j<n;j++){
        int d,s;
        cin>>d>>s;
        int k,q;
        if(s%2!=0){
            k=s/2+1;
        }
        else{
            k=s/2;
        }
        q=k+d;
        m=min(m,q);
 
    }
    cout<<m-1<<endl;
 
}
 
 
 
}