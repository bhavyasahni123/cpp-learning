#include <iostream>
#include<string>
using namespace std;
int main(){
    string name;
    int age;
    cout<<"what is your name?"<<endl;
    getline(cin, name);
    cout<< "what is your age?"<<endl;
    cin >> age;
    ;
    cout <<"Hello " << name << " you are " << age << " years old"<<endl;
    cout << "You will be "<< age+1 << " years old next year"<<endl;

}