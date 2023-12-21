#include<iostream>
using namespace std;

int main(){
    int n,sum=0;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        sum+=a[i];
    }
    if (n==1){
        cout<<"NO"<<endl;
    }
    else if ((sum/100)%2==0&&n%200==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
        
    }

return 0;
}