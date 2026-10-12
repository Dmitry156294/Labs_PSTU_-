#include <iostream>
#include <cmath>
using namespace std;

int main(){
    double a,b,result,p1,p2,p3,p4;
    a = 100.0;
    b = 0.001;
    p1=(a+b)*(a+b)*(a+b)*(a+b);
    p2=a*a*a*a + 4*a*a*a*b + 6 * a*a*b*b ;
    p3=4*a*b*b*b;
    p4=b*b*b*b;

    result =(p1-p2)/(p3+p4);
    cout << result << endl;

    float a2,b2,result2,p12,p22,p32,p42;
    a2 = 100.0;
    b2 = 0.001;
    p12=(a2+b2)*(a2+b2)*(a2+b2)*(a2+b2);
    p22=a2*a2*a2*a2 + 4*a2*a2*a2*b2 + 6 * a2*a2*b2*b2 ;
    p32=4*a2*b2*b2*b2;
    p42=b2*b2*b2*b2;

    result2 =(p12-p22)/(p32+p42);
    cout << result2 << endl;
    return(0);
}