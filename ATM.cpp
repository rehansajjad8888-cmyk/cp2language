#include <iostream>

using namespace std;

void menu(){
   cout<<" ********ATM Menu********"<<endl;
   cout<<"1.Check balance"<<endl;
   cout<<"2.withdraw money"<<endl;
   cout<<"3.deposit money"<<endl;
   cout<<"4.exit"<<endl;

}

int main(){
    int option,balance=1000;
    do{
    menu();
    cout<<"enter your option: ";
    cin>>option;
    switch(option){
        case 1:
        cout<<"your balance is: "<<balance<<endl;break;
        case 2:
        int withdraw,remaining_balance;
        cout<<"enter the amount to withdraw: ";
        cin>>withdraw;
        if(withdraw<=balance){
        cout<<withdraw<<" is withdrawn successfully"<<endl;
        remaining_balance=balance-withdraw;
        cout<<"your remaining balance is: "<<remaining_balance<<endl;break;
        }
        else{
        cout<<"insufficient balance"<<endl;break;
        }
        case 3:
        int deposite;
        cout<<"enter the amount to deposit: "<<endl;
        cin>>deposite;
        balance+=deposite;
        cout<<"your new baalnce is: "<<balance<<endl;break;
        case 4:
        cout<<"goodbye!"<<endl;break;
        default:
        cout<<"invalid option"<<endl;break;

    }
}while(option!=4);
}
