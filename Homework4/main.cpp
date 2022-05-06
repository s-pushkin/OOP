#include <cmath>
#include <iostream>
#include "cmath"
using namespace std;
int main() {
    float a = 4.8;
    float b = -7.9;
    double n;
    if (a >= b) {n = pow(a - b, (0.33));}
    else if (a < b) n = (pow(a, 2) + ((a - b) / (sin(a * b))));
    if (n < b) {
       cout << ((n + a) / (-b) + sqrt(pow(sin(a), 2) - cos(n)));
    } else if (n == b) cout << (tan(n * a) + pow(b, 2));
    else if (n > b) cout << (pow(b, 3) + n * pow(a, 2));
}
