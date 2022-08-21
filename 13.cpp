#include "std_lib_facilities.h"

void f(const int);

int main()
{
    const int i = 11;
    f(i);
}

void f(const int i)
{
    cout << i << endl;
}