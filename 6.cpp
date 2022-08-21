#include "std_lib_facilities.h"

void print(const vector<string> &v)
{
    for (string x : v)
        cout << x << " ";
    cout << endl;
}

void f1(const vector<string> &v)
{
    vector<string> new_v;
    for (int i = v.size() - 1; i >= 0; i--)
        new_v.push_back(v[i]);
    print(new_v);
}

void f2(vector<string> &v)
{
    for (int i = 0, j = v.size() - 1; i < j; i++, j--)
        swap(v[i], v[j]);
    print(v);
}

int main()
{
    vector<string> vr = {"on", "this", "rock", "I", "will", "build", "my", "church"};
    f1(vr);
    f2(vr);
}