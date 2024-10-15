#include<iostream>
#include<string>

using namespace std;

const int passingGrade = 60;

struct Student
{
    std::string name;
    int age;
    int grade;
    /* data */

    Student(){ // overloaded

    };

    Student(string newName, int newAge, int newGrade){ // c++ is object oriented so every class or struct
    // needs to have a constructer similar to an __init__ method in Python
        this->name = newName;
        this->age = newAge;
        this->grade = newGrade;
    }

    bool ifNameMatchAndPassing(std::string& givenName) const{
        // passing grade is any letter that is not an F
        return (this->name == givenName) && (this->grade >= passingGrade);
    }
};

class Pair {
    string grade;
    int value;

    public:
        Pair(string newGrade, int newValue){
            this->grade = newGrade;
            this->value = newValue;
        }

        string getGrade(){
            return grade;
        }

        int getValue(){
            return value;
        }
};

int main() {
    string name = "pablo";
    int pabloGrade = 70;
    int pabloAge = 23;
    string name2 = "chris";

    Student student2;
    Student student1(name, pabloAge, pabloGrade);

    if (student1.ifNameMatchAndPassing(name)) {
        cout << "true" << endl;  // If function returns 1
    } else {
        cout << "false" << endl; // If function returns 0
    }

    return 0;
}
