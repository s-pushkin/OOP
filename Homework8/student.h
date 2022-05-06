#include <utility>

#include "iostream"
#ifndef NUMBER8_STUDENT_H
#define NUMBER8_STUDENT_H
using namespace std;
class student {
    int vozr{};
    string fio;
    string kod;
public:
    student();

    student(int _vozr, string _fio, string _kod);
};

student::student(int _vozr, string _fio, string _kod) {
    vozr = _vozr;
    fio = move(_fio);
    kod = move(_kod);
}

student::student() = default;

ostream& operator<<(ostream& stream, const student& obj) {
    return stream << "vozr: "<< obj.vozr << " .fio: " << obj.fio  << "" << " .kod: " << obj.kod;
}
istream& operator>> (istream &in, student &point)
{
    cout << "enter vozr, fio and kod" << endl;
    in >> point.vozr;
    in >> point.fio;
    in >> point.kod;

    return in;
}
#endif
