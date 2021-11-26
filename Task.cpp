//
// Created by paefarinov on 19.11.2021.
//

#include "Task.h"

using namespace std;

string Task::display() {

    return "name: " + name +
           "\ndescription: " + description +
           "\ndueTo: " + to_string(dueTo) +
           "\nTaskStatus: "  + (status == 0 ? "ACTIVE" : "RESOLVED")
           + "\nCreationTime: " +
           asctime(localtime(&creationTime));
}
Task::Task() {
    time (&creationTime);
}

void Task::setName(string name) {
    this->name = name;
}

string Task::getName() {
    return name;
}

void Task::setDescription(string desc) {
    description = desc;

}

string Task::getDescription() {
    return description;
}

Task::Task(string name, string description) {
    time (&creationTime);
    this->name = name;
    this->description = description;
}
