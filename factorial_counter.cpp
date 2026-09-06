#include <iostream>

using namespace std;

int main(){
    int num,factorial;
    cout<<"Number: ";
    cin>>num;
    factorial=1;
    for(int i=1;i<=num;i++){
        factorial=factorial*i;
    }
    cout<<"factorial of "<<num<<" is: "<<factorial;
    return 0;
}

