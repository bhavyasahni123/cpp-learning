#include <iostream>
using namespace std;
int main(){
    int a;
    int b;
    cout<<"Enter two numbers"<<endl;
    cin>>a;
    cin>>b;
    cout<<"Sum "<<(a+b)<<endl;
    cout<<"Difference "<<(a-b)<<endl;
    cout<<"Product "<<(a*b)<<endl;
    cout<<"Quotient "<<(a/b)<<endl;
    cout<<"Remainder "<<(a%b)<<endl;
    cout<<b*(a/b)+(a%b)<<endl;
    
}
