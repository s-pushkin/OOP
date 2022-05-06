#include <iostream>
#include <utility>
using namespace std;
class chel {
public:
    string famil;
    string name;
    string secondname;
    int age;
    chel(string _famil, string _name, string _secondname, int _age):
        famil(move(_famil)), name(move(_name)), secondname(move(_secondname)), age(_age)
        {

        }
    void print() const {
        cout << famil << " " << name << " " <<  secondname << " " <<  age << endl;
    }
    ~chel();
};

chel::~chel() = default;


class Student: public chel {
public:
    Student(string famil, string name, string secondname, int age, bool on_lesson) : chel(move(famil), move(name), move(secondname), age) {
        print();
    }
    ~Student();
};

Student::~Student() = default;


class Boss: public chel {
public:
    Boss(string famil, string name, string secondname, int age, int numbers_of_workes) : chel(move(famil), move(name), move(secondname), age) {
        print();
    }
    ~Boss();
};

Boss::~Boss() = default;


int main() {
    chel b ("Pushkin", "Sergey", "SP", 27);
    Student a("Pushkin", "Sergey", "SP", 27, false);
    Boss c ("Pushkin", "Sergey", "SP", 27, 8);
    return 0;
}
