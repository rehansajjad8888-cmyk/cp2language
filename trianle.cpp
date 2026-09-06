#include <iostream>
#include <iomanip>

using namespace std;

int main (){
    int length;
    char symbol;
    cout<<"length: ";
    cin>>length;
    cout<<"symbol; ";
    cin>>symbol;
    for(int i=0;i<=length;i++){
        for(int j=0;j<=i;j++){
            cout<<setw(2)<<symbol;
        }
        cout<<endl;
    }
}

