#include <iostream>

using namespace std;

int main(){
    int grade,sum=0;
    for(int i=1;i<=3;i++){
        do{
            cout<<"grade"<<i<<": ";
            cin>>grade;
        }while(grade<0 || grade>5);
        sum+=grade;
    }
    int average=sum/3;
    cout<<"sum: "<<sum<<endl;
    cout<<"average: "<<average<<endl;
}