#ifndef UNTITLED4_COMPLEX_H
#define UNTITLED4_COMPLEX_H
#include <iostream>
#include <cmath>

class complexNumber {
public:

    double FINomer;
    double FRNomer;
    void setValues(double image, double real) {
        FINomer = image;
        FRNomer = real;
    }

    double abs() const {
        return pow(((FRNomer * FRNomer) + (FINomer * FINomer)), 0.5);
    }

    complexNumber operator+(const complexNumber &c) const
    {
        complexNumber temp{};

        temp.FRNomer = FRNomer + c.FRNomer;
        temp.FINomer = FINomer + c.FINomer;

        return temp;
    }
    complexNumber operator - (complexNumber &c) const
    {
        complexNumber temp{};

        temp.FRNomer = FRNomer - c.FRNomer;
        temp.FINomer = FINomer - c.FINomer;

        return temp;
    }
    complexNumber operator *(const complexNumber &c) const {
        complexNumber temp{};
        temp.FRNomer = FRNomer * c.FRNomer;
        temp.FINomer = FRNomer * c.FINomer;

        return temp;
    }
    complexNumber operator /(const complexNumber &c) const {
        complexNumber temp{};
        double r = c.FRNomer * c.FRNomer + c.FINomer * c.FINomer;
        temp.FRNomer = (FRNomer * c.FRNomer + FINomer * c.FINomer) / r;
        temp.FINomer = (FINomer * c.FRNomer - FRNomer * c.FINomer) / r;
        return temp;
    }

};
std::ostream& operator<<(std::ostream& stream, const complexNumber& obj) {
    return stream << obj.FINomer << " + " << obj.FRNomer << "i";
}
#endif
