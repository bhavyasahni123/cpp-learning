#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<< "Enter two numbers:"<<endl;
    cin>>a>>b;
    if(a>0 && b>0){
        cout<<"Both the numbers are postive"<<endl;
    }
    else{
        cout<<"At least one of the numbers is not positive"<<endl;
    }
    if (a<0 || b<0){
        cout<<"At least one of the numbers is negative"<<endl;
    }
    else{
        cout<<"Both the numbers are not negative"<<endl;
    }
    if (a*b>0){
        cout<< "Both the numbers have the same sign"<<endl;
    }
    else{
        cout<<"Both the numbers have diferent signs"<<endl;
    }


}
