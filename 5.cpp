#include "std_lib_facilities.h"

void print(const vector<int> &v)
{
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

void f1(const vector<int> &v)
{
    vector<int> new_v;
    for (int i = v.size()-1; i >= 0; i--)
        new_v.push_back(v[i]);
    print(new_v);
}

void f2(vector<int> &v)
{
    for (int i = 0, j = v.size()-1; i < j; i++, j--)
        swap(v[i],v[j]);
    print(v);
}

int main()
{
    vector<int> vr = {1,2,3,4,5,6,7};
    f1(vr);
    f2(vr);
}