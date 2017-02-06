#include <iostream>
#include <math.h>
using namespace std;

int main(){
    float r= 1;
    float pi = atan(1) * 4;

    for(int n=3; n < 10000000; n++){
        r= r/cos(pi/n);
    if(n == 3){
        cout << "For n=1 there is no radius so here is the value for n = 3" << endl;
        cout << "n=3 has a radius of " << r << endl;
    }
    else if(n == 10)
        cout << "n=10 has a radius of " << r << endl;
    else if(n == 100)
        cout << "n=100 has a radius of " << r << endl;
    else if(n == 1000)
        cout << "n=1,000 has a radius of " << r << endl;
    else if(n == 10000)
        cout << "n=10,000 has a radius of " << r << endl;
    else if(n == 100000)
        cout << "n=100,000 has a radius of " << r << endl;
    else if(n == 1000000)
        cout << "n=1,000,000 has a radius of " << r << endl;
    }

}

