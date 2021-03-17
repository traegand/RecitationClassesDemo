#include "Example.h"
#include "Student.h"



int main() {

    /*START EXAMPLE OBJECT CODE*/
    Example exampleObj; // create object

    /*START object function calls*/
    exampleObj.PrintMessage();
    cout << "The length of the message \"" << exampleObj.GetMessage() << "\" is: " << exampleObj.GetMessageLength() << endl;
    exampleObj.SetMessage("This is a new message!");
    exampleObj.PrintMessage();
    cout << "The length of the message \"" << exampleObj.GetMessage() << "\" is: " << exampleObj.GetMessageLength() << endl;
    /*END object function calls*/

    exampleObj = Example("Creating a new object."); //Intialize a new object
    Example additionalExample("Here is a message");
    exampleObj.PrintMessage();
    additionalExample.PrintMessage();
    /*END EXAMPLE OBJECT CODE*/

    Student student;

    student.Print();

    student.SetName("Jubal");
    student.SetGPA(4.0);
    student.SetMajor("CompSci");

    cout << student.ToString() << endl;

    cout << "Students name is: " << student.GetName() << endl;
    return 0;
}


//stringstream is a good thing to look at but not required