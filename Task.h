//
// Created by paefarinov on 19.11.2021.
//

#ifndef UNTITLED_TASK_H
#define UNTITLED_TASK_H

#include <chrono>
#include <ctime>
#include<string>
#include "TaskStatus.h"

using namespace std;

class Task {
public:
    void setName(string name);
    string getName();
    void setDescription(string desc);
    string setDescripton;
    string getDescription();
    string getDescripton;
    TaskStatus getStatus;
    string display();

    Task();
    Task(string name, string description);
private:

    string name;
    string description;
    int dueTo;
    time_t creationTime;
    TaskStatus status = ACTIVE;
};

#endif //UNTITLED_TASK_H
