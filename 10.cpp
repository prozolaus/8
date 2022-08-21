#include "std_lib_facilities.h"

struct my_struct
{
    int min;
    int max;
    int average;
    int median;
};

my_struct fnc()
{
    my_struct s;
    s.min = 0;
    s.max = 100;
    s.average = 50;
    s.median = 50;
    return s;
}

int main()
{
    my_struct str = fnc();
    cout << str.median << endl;
}