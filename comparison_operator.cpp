#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter two numbers: "<<endl;
    cin>>a>>b;
    { 
        if(a==b){
        cout<<a<<" is equal to "<<b<<endl;
        }
        else{
        cout<<a<<" is not equal to "<<b<<endl;
       }
    }
    
    {
        if(a>b){
            cout<<a<<"is greater than"<<b<<endl;
        }
        else{
            cout<<a<<" is not greater than "<<b<<endl;
        }

    }
    
}