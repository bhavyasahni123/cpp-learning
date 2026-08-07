/* Problem: https://open.kattis.com/problems/aaah
Input: Jon's "aaah" and the doctor's required "aaah".
Output: "go" if Jon's "aaah" is at least as long as the doctor's,
        otherwise output "no".
*/
#include <iostream>
#include <string>
using namespace std;
int main(){
    string SJ,SD;
    cin >> SJ >> SD;
    if(SJ.size()>=SD.size()){
        cout << "go" << endl;
    }
    else{
        cout << "no" << endl;
    }

}