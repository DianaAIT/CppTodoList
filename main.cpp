#include <iostream>
#include "TodoList.h"


int main() {

    TodoList list;
    Task testTask;

    testTask.setName("TEST NAME");
    testTask.setDescription("TEST DESCRIPTION");

    list.addTask(testTask);
    list.completeTask(testTask);
/*    if(!list.addTask(testTask))
    {
        cout << "WAS UNABLE TO ADD NEW TASK: " + testTask.display();
    }*/

    auto resultList = list.resolvedTasks();

    for (Task resultTask: resultList) {
        cout << resultTask;
    }
    list[3];
    return 0;
}
