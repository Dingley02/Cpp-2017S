#include <iostream>
using namespace std;

int main()
{
    float fsum1 = 0;
    float fsum2 = 0;
    double dsum1 = 0;
    double dsum2 = 0;

    for(float i= 1; i<101; i++){
       fsum1 += 1/i;
        }
    for(float n= 100; n>0; n--){
       fsum2 = fsum2 + 1/n;
       }
    for(double x= 1; x<101; x++){
        dsum1 = dsum1 + 1/x;
    }
    for(double y= 100; y>0; y--){
        dsum2 = dsum2 + 1/y;
    }
    cout << "Using float" << endl;
    cout << "The float value for sum1 is " << fsum1 << endl;
    cout << "The float value for sum2 is " << fsum2 << endl;
    cout << "The difference between these two is " << fsum1 - fsum2 << endl;

    cout << "Using double" << endl;
    cout << "The double value for sum1 is " << dsum1 << endl;
    cout << "The double value for sum2 is " << dsum2 << endl;
    cout << "The difference between these two is " << dsum1 - dsum2 << endl;

    //Using double instead of float is more precise
}
