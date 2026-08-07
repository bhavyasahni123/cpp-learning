/* Problem: https://open.kattis.com/problems/quadrant
Input: x and y coordinates of a point (neither is 0).
Output: Print the quadrant (1, 2, 3, or 4) where the point lies.
*/
#include <iostream>
using namespace std;
int main(){
    int x,y;
    cin>>x>>y;
    if(x>0){
        if(y>0)
            cout<<1;
        else
            cout<<4;
    }
    else{
        if(y>0)
            cout<<2;
        else
            cout<<3;
    }

}