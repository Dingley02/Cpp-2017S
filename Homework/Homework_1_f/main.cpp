#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    float sum1 = 0;
    float sum2 = 0;

    for(float n = 1; n<10000000; n++)
        sum1 = sum1 + 1/(n*n);
    for(float n = 10000000; n>0; n--)
        sum2 = sum2 + 1/(n*n);

    cout << "Forward sum solution: "<< sqrt(6*sum1) << endl;
    cout << "Backward sum solution: " << sqrt(6*sum2) << endl;

}
