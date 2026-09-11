#include <iostream>

using namespace std;

bool isprime(int number){
    for(int i=2;i<number;i++){
        if(number%i==0){
            return false;
            break;
        }
    }
    return true;
}
int main(){
    int number;
    cout<<"Number: ";
    cin>>number;
    if(isprime(number)){
        cout<<"prime number"<<endl;
    }
    else
    cout<<"not prime"<<endl;
}
