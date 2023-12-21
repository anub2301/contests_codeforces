#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int z,p;
    cin>>z>>p;
    int a[z];

    //entering array's elements
    for(int i=0;i<z;i++){
        cin>>a[i];
    }
    //sorting the array
    sort(a,a+z);
    //different cases
    if(p!=0){
    if(a[p]==a[p-1]){
    cout<<-1<<endl;
    }
    else{
        cout<<a[p-1]<<endl;
    }
    }
    else if(p==0&&(a[p]==1||a[p]==0)){
        cout<<-1<<endl;
    }
    else{
        cout<<a[p]-1<<endl;


    }

return 0;
}