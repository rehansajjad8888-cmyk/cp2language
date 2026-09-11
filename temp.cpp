#include <iostream>

using namespace std;
template <typename T>
T sumfun(T a, T b) {
    return a + b;
}

int main(){
    int a, b;
    cout<<"number 1: ";
    cin>>a;
    cout<<"number 2: ";
    cin>>b;
    cout<<"Sum: "<<sumfun(a, b);
}