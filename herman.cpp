/*Problem-https://open.kattis.com/problems/herman
Input: radius r
Output:
Area of a Euclidean circle.
Area of a Taxicab circle, where distance is measured
using m D=|x1-x2| + |y1-y2| instead of Euclidean distance.
*/

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double r;
    cin>>r;
    double A1=3.14159265358979323846*r*r;
    double A2=2*r*r;
    cout<<fixed<< setprecision(10);
    cout<<A1<<endl;
    cout<<A2<<endl;
}