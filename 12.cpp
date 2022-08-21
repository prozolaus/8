#include "std_lib_facilities.h"

void print(const vector<int> &);
void print(const vector<string> &);

vector<int> fnc(const vector<string> &vs)
{
    vector<int> vi;
    for (string s : vs)
        vi.push_back(s.length());
    return vi;    
}

int min(const vector<int> &vi)
{
    int min = INT16_MAX;
    for (int x : vi)
        if (x < min) 
            min = x;
    return min;
}

int max(const vector<int> &vi)
{
    int max = INT16_MIN;
    for (int x : vi)
        if (x > max) 
            max = x;
    return max;
}

string first_str(vector<string> vs)
{
    sort(vs.begin(), vs.end());
    return vs[0];
}

string last_str(vector<string> vs)
{
    sort(vs.begin(), vs.end());
    return vs[vs.size()-1];
}

int main()
{
    vector<string> vs = {"James", "Lars", "Kirk", "Rob", "Nick", "Andrew"};
    vector<int> vi = fnc(vs);
    print(vs);
    print(vi);
    cout << min(vi) << endl;
    cout << max(vi) << endl;
    cout << first_str(vs) << endl;
    cout << last_str(vs) << endl;
}

// --------------------------------------------------------------------------

void print(const vector<int> &vi)
{
    for (int x : vi)
        cout << x << " ";
    cout << endl;
}

void print(const vector<string> &vs)
{
    for (string x : vs)
        cout << x << " ";
    cout << endl;
}