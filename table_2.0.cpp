#include <iostream>

using namespace std;

int main(){
    int num;
    cout<<"Number: ";
    cin>>num;
    for(int i=num;i<=10;){
        for(int j=1;j<=10;j++){
            cout<<num<<"*"<<j<<"="<<num*j<<endl;
        }
    }
}