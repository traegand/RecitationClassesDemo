#ifndef RECITATIONCLASSESDEMO_EXAMPLE_H
#define RECITATIONCLASSESDEMO_EXAMPLE_H


#include <string>
#include <iostream>


using namespace std;

class Example {
private:
    string message;
public:
    Example(string message = "default message");
    string GetMessage();
    void SetMessage(string message);
    void PrintMessage();
    int GetMessageLength();
};


#endif //RECITATIONCLASSESDEMO_EXAMPLE_H
