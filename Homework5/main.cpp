#include <iostream>
using namespace std;
void zapoln(int* ptr, int a);
void pokaz(int* ptr, int a);
void sort(int* ptr, int a);
int main() {
    int size = 12;
    int* swap = new int[size];
    zapoln(swap, size);
    pokaz(swap, size);
    sort(swap, size);
    pokaz(swap, size);
    delete[] swap;
    return 0;
}
void zapoln(int* ptr, int a) {
for (int i = 0; i < a; i++) {
    ptr[i] = i + 1;
}}

void pokaz(int* ptr, int a) {

for (int i = 0; i < a; i++) {
    cout << ptr[i] << "  ";
}
    cout << endl;

}

void sort(int* ptr, int a) {
    int getsort;
    for (int i = 1; i < a; i+=2) {
            getsort = ptr[i];
            ptr[i] = ptr[i - 1];
            ptr[i - 1] = getsort;
    }
}