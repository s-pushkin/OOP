#include <iostream>
#include <cmath>

class CompNomer {
private:
    double FINum;
    double FRNum;
public:
    void setValues(double image, double real) {
        FINum = image;
        FRNum = real;
    }

};

class Vector {
    double a1, a2, a3;
    double vector_a[3];

public:
    void setValues(double _a1, double _a2, double _a3, double _b1, double _b2, double _b3) {
        a1 = _a1;
        a2 = _a2;
        a3 = _a3;

    }

    double distance() const {
        double z;
        z = sqrt(pow(a1, 2) +  pow(a2, 2) + pow(a3, 2));
        return z;
    }
};
class aCircle {
    const float p = 3.14;
    double r{};
public:
    void setValues(double _r) {
        r = _r;
    }
    double square() const {
        return p*pow(r, 2);
    }

    double distance() const {
        return 2 * p * r;
    }

};
int main() {
    return 0;
};