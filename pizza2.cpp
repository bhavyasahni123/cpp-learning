/* Problem: https://open.kattis.com/problems/pizza2
Input: Pizza radius R and crust thickness C.
Output: Percentage of the pizza's area that has cheese
*/
#include<iostream>
#include <iomanip>
using namespace std;
int main(){
    double R,C;
    cin>>R>>C;
    double A1=3.14159265358979323846*R*R;
    double A2=3.14159265358979323846*(R-C)*(R-C);
    double percentage=(A2/A1)*100;
    cout<< fixed << setprecision(10);
    cout<<percentage<<endl;
}