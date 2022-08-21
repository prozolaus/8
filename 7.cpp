#include "std_lib_facilities.h"

void print(const vector<string> &name, const vector<double> &age)
{
    if (name.size() != age.size())
        error("name.size() != age.size()");
    for (int i = 0; i < name.size(); i++)
        cout << name[i] << " - " << age[i] << " years old\n";
    cout << endl;
}

void mysort(const vector<string> &name, const vector<string> &name_copy, vector<double> &age, vector<double> &new_age)
{
    for (int i = 0; i < age.size(); i++)
        for (int j = 0; j < age.size(); j++)
            if (name[i] == name_copy[j])
                new_age.push_back(age[j]);
}

int main()
{
    vector<string> name{"James", "Lars", "Kirk", "Rob", "Nick", "Andrew"};
    vector<string> name_copy = name;
    vector<double> age{57, 57, 58, 56, 32, 45};
    vector<double> new_age;
    print(name, age);
    sort(name.begin(), name.end());
    mysort(name, name_copy, age, new_age);
    print(name, new_age);
}