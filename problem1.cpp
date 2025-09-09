#include <iostream>
#include <ostream>
#include <stdio.h>
using namespace std;

int main(){
    int intNumber = 24;
    float floatNumber = 3.14;
    double doubleNumber = 42.1234;
    bool boolNumber = true;
    char charName='A';
    cout << "Value of Integer is " <<intNumber <<". Size is "<<sizeof(intNumber)<<endl;
    cout << "Value of Float is " << floatNumber <<". Size is "<<sizeof(floatNumber)<<endl;
    cout << "Value of Double is " << doubleNumber <<". Size is "<<sizeof(doubleNumber)<<endl;
    cout << "Value of Bool is " << boolNumber <<". Size is "<<sizeof(boolNumber)<<endl;
    cout << "Value of Char is " << charName <<". Size is "<<sizeof(charName)<<endl;
    return 0;

}
