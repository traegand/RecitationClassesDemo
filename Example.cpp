//
// Created by Traed on 3/17/2021.
//

#include "Example.h"

Example::Example(string message) {
    this->message = message;
}

string Example::GetMessage() {
    return message;
}

void Example::SetMessage(string newMessage) {
    message = newMessage;
}

void Example::PrintMessage() {
    cout << message << endl;
}

int Example::GetMessageLength() {
    return message.size();
}
