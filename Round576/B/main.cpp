#include <iostream>

using namespace std;

int main() {
    double h, l;
    cin >> h >> l;

    double res = (l*l - h*h)/(2*h);
    cout << fixed;
    cout << res;
    return 0;
}