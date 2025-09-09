#include <iostream>
using namespace std;

int main() {
    double d, mpg, p;
    cin >> d >> mpg >> p;

    double cost = (d / mpg) * p;

    cout << "The cost of driving is $" << cost << endl;

    return 0;
}
