#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Function to display the To-Do list
void displayToDoList(const vector<string>& todoList) {
    cout << "To-Do List:" << endl;
    for (size_t i = 0; i < todoList.size(); ++i) {
        cout << i + 1 << "->" << todoList[i] << endl;
    }
}

int main() {
    vector<string> todoList;
    string task;

    while (true) {
        cout << "Options:" << endl;
        cout << "1. Add Task" << endl;
        cout << "2. Mark Task as Completed" << endl;
        cout << "3. Display To-Do List" << endl;
        cout << "4. Quit" << endl;

        int choice;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the task to add: ";
                cin>>task;
                todoList.push_back(task);
                cout << "Task added successfully!" << endl;
                
                break;

            case 2:
                if (!todoList.empty()) {
                    cout << "Enter the task number to mark as completed: ";
                    int taskNumber;
                    cin >> taskNumber;

                    if (taskNumber >= 1 && taskNumber <= todoList.size()) {
                        todoList.erase(todoList.begin() + taskNumber - 1);
                        cout << "Task marked as completed!" << endl;
                    } else {
                        cout << "Invalid task number. Please try again." << endl;
                    }
                } else {
                    cout << "The To-Do list is empty." << endl;
                }
                break;

            case 3:
                if (!todoList.empty()) {
                    displayToDoList(todoList);
                } else {
                    cout << "The To-Do list is empty." << endl;
                }
                break;

            case 4:
                cout << "Goodbye!" << endl;
                return 0;

            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    }

    return 0;
}
