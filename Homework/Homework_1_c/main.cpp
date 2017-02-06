#include <iostream>
using namespace std;

int main()
{
    int n=100;
    int Gauss_answer = 0;
    int Loop_answer = 0;
    int compare = 0;

    Gauss_answer = n*(n+1)/2;

    cout << "The sum using the Gauss formula is " <<Gauss_answer << endl;

    for(int i= 1; i < 101; i++){
        Loop_answer = Loop_answer + i;
    }

    cout << "The sum using a loop is " <<Loop_answer << endl;

    compare = Gauss_answer - Loop_answer;

    if (compare == 0) {
        cout << "The two answers are the same" << endl;
    }
    else
        cout << "The two answers are different. There is a problem!" << endl;


}
