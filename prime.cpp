#include <iostream>

using namespace std;

int main(){
    int number;
    cout<<"number: ";
    cin>>number;
    bool isprimenum=true;
    for(int i=2;i<number;i++){
        if(number%i==0){
            isprimenum=false;
            break;
        }
    }
        if(isprimenum){
            cout<<"prime number"<<endl;
        }
        else
        cout<<"not prime number"<<endl;
}