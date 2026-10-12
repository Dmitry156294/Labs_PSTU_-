#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a,sum;
    sum = 0.0;
    int n=2;
    do { 
        a = (double)n/((n-1)*(n-1));
        sum +=a;
        n++;
    }while(fabs(a)>= 1e-4);
    cout << sum << endl;
  return 0;
}