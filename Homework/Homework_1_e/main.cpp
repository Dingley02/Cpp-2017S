#include <iostream>
using namespace std;

int main()
{
    float n= 0;
    float original= 0;
    cout << "Please ender a integer Value for n: " << endl;
    cin >> n;

    original= n;

    for(int x = n; x>1; x--)
        n= n*(x-1);

    cout << original << "!= " << n << endl;


}
