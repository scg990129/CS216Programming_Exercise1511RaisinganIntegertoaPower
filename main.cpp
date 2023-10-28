#include <iostream>

using namespace std;

int power(int x, int y);

int main() {
    int x, y;
    cin >> x >> y;

    cout << endl << power(x, y) << endl;

    return 0;
}

int power(int x, int y) {
    switch (y) {
        case 0:
            return 1;
        case 1:
            return x;
        default:
            return (y > 1) ?
            x * power(x, y - 1) :
            1/ (x * power(x, -1 * y));
    }
}