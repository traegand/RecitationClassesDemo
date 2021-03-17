#include "Student.h"


Student::Student(){
    name = "NULL";
    gpa = -1;
    major = "NULL";
}

string Student::GetName(){
    return name;
}

Student::Student(string aName, double aGPA, string aMajor) : name(aName), gpa(aGPA), major(aMajor) {

}

void Student::SetName(string aName) {
    name = aName;
}

double Student::GetGPA() {
    return gpa;
}

void Student::SetGPA(double aGPA) {
    gpa = aGPA;
}

string Student::GetMajor() {
    return major;
}

void Student::SetMajor(string aMajor) {
    major = aMajor;
}

void Student::Print() {
    cout << name << " is studying " << major << " with a gpa of " << gpa << endl;
}

string Student::ToString() {
    return name + " is studying " + major + " with a gpa of " + to_string(gpa);
}
