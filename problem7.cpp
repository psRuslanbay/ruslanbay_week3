#include <iostream>
using namespace std;

int main() {
    int x, y;
    cin >> x >> y;

    float t = (3 * (x * x + 3)) / ( (y / 4.0f) + 3 );
    cout << "t=" << t << endl;

    return 0;
}
