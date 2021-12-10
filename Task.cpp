//
// Created by paefarinov on 19.11.2021.
//

#include "Task.h"

using namespace std;

string Task::display() {

    return "name: " + name +
           "\ndescription: " + description +
           "\ndueTo: " + asctime(localtime(&dueTo)) +
           "\nTaskStatus: "  + (status == 0 ? "ACTIVE" : "RESOLVED") +
           "\nCreationTime: " + asctime(localtime(&creationTime));
}
Task::Task() {
    time (&creationTime);
    time (&dueTo);
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
    time (&dueTo);
    this->name = name;
    this->description = description;
}

void Task::setStatus(TaskStatus status) {
    this->status = status;
}

TaskStatus Task::getStatus() {
    return status;
}

std::ostream &operator<<(ostream &stream, Task task) {
    stream << task.display();
    return  stream;
}

