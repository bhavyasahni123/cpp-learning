/*
Problem: https://open.kattis.com/problems/spavanac

Input: Two integers H and M representing a time in 24-hour notation.

Output: Print the time 45 minutes earlier than the input time.

*/
#include <iostream>
using namespace std;
int main(){
    int H,M;
    int H1, M1;
    cin >>H>>M;
    int T1=H*60+M-45;
    H1=T1/60;
    M1=T1%60;
    cout <<H1<<" "<<M1<<endl;
}