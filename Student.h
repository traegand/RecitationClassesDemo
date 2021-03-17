#ifndef RECITATIONCLASSESDEMO_STUDENT_H
#define RECITATIONCLASSESDEMO_STUDENT_H

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    double gpa;
    string major;
public:
    Student();
    Student(string aName, double aGPA, string aMajor);
    string GetName();
    void SetName(string aName);
    double GetGPA();
    void SetGPA(double aGPA);
    string GetMajor();
    void SetMajor(string aMajor);

    void Print();
    string ToString();
};


#endif //RECITATIONCLASSESDEMO_STUDENT_H
