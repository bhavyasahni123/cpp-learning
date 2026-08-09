/*
Problem: https://open.kattis.com/problems/spavanac

Input: Two integers H and M representing a time in 24-hour notation.

Output: Print the time 45 minutes earlier than the input time.

*/
#include <iostream>
using namespace std;
int main(){
    int H,M;
    cin >>H>>M;
    M-=45;
    if (M<0){
        M+=60;
        H-=1;
       
       
    }
    if (H<0){
        H=23;;
    }
    cout<<H<<" " <<M;
}