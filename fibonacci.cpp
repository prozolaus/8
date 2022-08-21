#include "std_lib_facilities.h"

void print(const string &label, const vector<int> &v)
{
    cout << label << endl;
    for (int x : v)
        cout << x << " ";
    cout << endl;
}

void fibonacci(int x, int y, vector<int> &v, int n)
{
    if (n<3) error("the vector should have three elements at least");
    if (x<1) error("the first argument must be greater than 0");
    if (x>y) error("the second argument must be greater or equal than the first one");
    v.push_back(x);
    v.push_back(y);
    for (int i = 2; i < n; i++)
        v.push_back(v[i-2]+v[i-1]);
}

int main()
{
    int x = 1;
    int y = 2;
    int n = 45;
    vector<int> v;
    string label = "Fibonacci sequence:";
    fibonacci(x,y,v,n);
    print(label,v);
}