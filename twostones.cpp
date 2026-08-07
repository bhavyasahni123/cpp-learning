/* Problem: https://open.kattis.com/problems/stones
Input: Number of stones N.
Alice starts first. Players alternately remove exactly two consecutive stones.
Output: Print the winner ("Alice" or "Bob") assuming both play optimally.
*/
#include <iostream>
using namespace std;
int main(){
    int N;
    cin>>N;
    if (N%2==0){
        cout<<"Bob"<<endl;
    }
    else{
        cout<<"Alice"<<endl;    
    }
}
