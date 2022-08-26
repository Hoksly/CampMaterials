#include <iostream>
#include <vector>
using namespace std;

struct person
{
    string first_name;
    string second_name;
    int age;
    long id;

    person(string name, string sec_name, int in_age, long in_id) : age(in_age),
                                                                   first_name(name),
                                                                   second_name(sec_name),
                                                                   id(in_id) {}
};

struct group
{
    string name;
    vector<person> members;
};

int main()
{
    person A("Van", "Darkholm", 49, 123123123);
    person *ptr = &A;

    ptr->first_name = "Van";
    ptr->second_name = "Darkholm";
    ptr->age = 49;
    ptr->id = 12312381273;

    (*ptr).age = 49;
    ptr->age = 49;

    pair<int, string> idk;
}
