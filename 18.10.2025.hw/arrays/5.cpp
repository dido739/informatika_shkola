#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Student {
    string name;
    double grade;
};

int main() {
    vector<Student> students = {
        {"Ivan", 5.5},
        {"Maria", 6.0},
        {"Ivan", 4.5},
        {"Petar", 5.0}
    };

    sort(students.begin(), students.end(), [](const Student &a, const Student &b) {
        if (a.name == b.name)
            return a.grade > b.grade;
        return a.name < b.name;
    });

    for (const auto &s : students) {
        cout << s.name << " " << s.grade << endl;
    }

    return 0;
}
