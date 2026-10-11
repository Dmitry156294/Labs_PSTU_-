#include <iostream>
#include <cmath>
using namespace std;

int main(){
    int a = 1000;
    float b = 0.0001;
    int result = (pow(a+b,4)-(pow(a,4)+4*pow(a,3)*b + 6 * pow(a,2) * pow(b,2)))/(4*a*pow(b,3)+pow(b,4));
    cout << result << endl;
    return(0);
}