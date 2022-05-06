#include <iostream>
#include <cmath>
using namespace std;
class complNum {
public:

    double FINum;
    double FRNum;
    void setValues(double img, double real) {
        FINum = img;
        FRNum = real;
    }

    double abs() const {
        return sqrt(FRNum * FRNum + FINum * FINum);
    }

    complNum operator+(const complNum &c) const
    {
        complNum temp{};

        temp.FRNum = FRNum + c.FRNum;
        temp.FINum = FINum + c.FINum;

        return temp;
    }
    complNum operator - (complNum &c) const
    {
        complNum temp{};

        temp.FRNum = FRNum - c.FRNum;
        temp.FINum = FINum - c.FINum;

        return temp;
    }
    complNum operator *(const complNum &c) const {
        complNum temp{};
        temp.FRNum = FRNum * c.FRNum;
        temp.FINum = FRNum * c.FINum;

        return temp;
    }
    complNum operator /(const complNum &c) const {
        complNum temp{};
        double r = c.FRNum * c.FRNum + c.FINum * c.FINum;
        temp.FRNum = (FRNum * c.FRNum + FINum * c.FINum) / r;
        temp.FRNum = (FINum * c.FRNum - FRNum * c.FINum) / r;
        return temp;
    }
    ~complNum() = default;

};
ostream& operator<<(ostream& stream, const complNum& obj) {
    return stream << obj.FINum << " + " << obj.FRNum << "i";
}
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
    ~Vector() = default;
};
class aCircle {
    float p = 3.14;
    double r{};
public:
     explicit aCircle(double _r):
        r(_r) {
         r = _r;
     }
     ~aCircle() = default;
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