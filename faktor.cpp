// Problem-https://open.kattis.com/problems/faktor
/*
citations be=C
I=⌈C/A⌉
I-1<C/A<=I
(I-1)*A<C<=I*A
Minimum integer C =(I-1)*A+1
*/

#include <iostream>
using namespace std;
int main(){
    int A;
    int I;
    int C;
    cin>>A>>I;
    C=(I-1)*A+1;
    cout<<C<<endl;
}