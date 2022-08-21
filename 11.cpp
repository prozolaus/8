#include "std_lib_facilities.h"

void print_until_s(vector<string> v, string quit)
{
    for (string s : v)
    {
        if (s == quit)
            return;
        cout << s << endl;
    }
}

void print_until_ss(vector<string> v, string quit)
{
    bool b = false;
    for (string s : v)
    {
        if (s == quit)
        {
            if (b)
                return;
            b = true;
        }
        cout << s << endl;
    }
}