#include <iostream>
using namespace std;
void pyzbIr(double pDob[], int n);
void pyzbIr(int pInt[], int n);

int main() {
    double arr[5] {3.5, 8.5, 1.2, 1.1, 8.8};
    pyzbIr(arr, 4);
}

void pyzbIr(double pDob[], int n) {
    for(int i = 1; i < n; ++i)
    {
        for(int r = 0; r < n-i; r++)
        {
            if(pDob[r] < pDob[r+1])
            {
                int temp = pDob[r];
                pDob[r] = pDob[r+1];
                pDob[r+1] = temp;
            }
        }
    }

    for(auto i = 0; i < n; ++i)
    {
       cout << pDob[i] << " ";
    }
}
void pyzbIr(int pInt[], int n) {
    for(int i = 1; i < n; ++i)
    {
        for(int r = 0; r < n-i; r++)
        {
            if(pInt[r] < pInt[r+1])
            {
                int temp = pInt[r];
                pInt[r] = pInt[r+1];
                pInt[r+1] = temp;
            }
        }
    }

    for(auto i = 0; i < n; ++i)
    {
        cout << pInt[i] << " ";
    }
}
