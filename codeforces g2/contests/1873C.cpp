#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        char a[10][10];
        int sum=0;

        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                cin>>a[i][j];
            }
        }
        for(int i=0;i<10;i++){
            for(int j=0;j<10;j++){
                if(a[i][j]=='X'){
                    if((i==0&&j<10)||(i<10&&j==0)||(i==9&&j<10)||(i<10&&j==9)){
                        sum+=1;
                    }
                    else if((i==1&&j<9&&j>0)||(i==8&&j<9&&j>0)||(j==1&&i<9&&i>0)||(j==8&&i<9&&i>0)){
                        sum+=2;
                    }
                    else if((i==2&&j<8&&j>1)||(i==7&&j<8&&j>1)||(j==2&&i<8&&i>1)||(j==7&&i<8&&i>1)){
                        sum+=3;
                    }
                    else if((i==3&&j<7&&j>2)||(i==6&&j<7&&j>2)||(j==3&&i<7&&i>2)||(j==6&&i<7&&i>2)){
                        sum+=4;
                    }
                    else {
                        sum+=5;
                    }

                }
            }

        }
        cout<<sum<<endl;
    }
return 0;
}