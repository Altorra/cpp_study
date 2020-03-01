#include <iostream>
#include <string>
#include <vector>
#include <map>
using namespace std;

struct person {
    string name;
    string surname;
    int age;
};

int main() {
    /*int x = -5;
    double i = 3.14;
    bool er = false;
    char symbol = 'a';
    string hw = "hello world";
    vector<int> nums = {1, 3, 4};
    cout << nums.size();*/
    map<string, int> name_to_value;
    name_to_value["one"] = 1;
    name_to_value["two"] = 2;
    cout << "two is" << name_to_value["two", "one"];
    return 0;
}

