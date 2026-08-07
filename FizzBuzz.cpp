/*Divisible by 3 → Print "Fizz"
Divisible by 5 → Print "Buzz"
Divisible by both 3 and 5 → Print "FizzBuzz"
Otherwise → Print the number. */

#include <iostream>
using namespace std;
int main(){
    int n;
    cout<< "Enter a number:"<<endl;
    cin >> n;
    if (n%15==0){
        cout<<"fizzBuzz"<<endl;
    }
    else if (n%3==0){
        cout<<"Fizz"<<endl;
    }
    else if (n%5==0){
        cout<<"Buzz"<<endl;
    }
    else{
        cout<<n<<endl;
    }
    
}