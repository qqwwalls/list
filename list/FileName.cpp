#include "func.h"
int main() {
    Task tasks[MAX_TASKS];
    int count = 0;
    int choice, index, priority;
    char text[100];

    while (true) {
        cout << "\n=== TODO LIST MENU ===\n";
        cout << "1. Add task\n";
        cout << "2. Show tasks\n";
        cout << "3. Edit task\n";
        cout << "4. Remove task\n";
        cout << "5. Search by title\n";
        cout << "6. Search by priority\n";
        cout << "7. Search by description\n";
        cout << "8. Search by date\n";
        cout << "9. Show tasks for month\n";
        cout << "10. Sort by priority\n";
        cout << "11. Sort by date\n";
        cout << "0. Exit\n";
        cout << "Choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            add_task(tasks, &count);
            break;
        case 2:
            show_task(tasks, &count);
            break;
        case 3:
            cout << "Enter task index: ";
            cin >> index;
            edit_task(tasks, &count, index - 1);
            break;
        case 4:
            cout << "Enter task index: ";
            cin >> index;
            remove_task(tasks, &count, index - 1);
            break;
        case 5:
            cout << "Enter part of title: ";
            cin.ignore();
            cin.getline(text, 100);
            search_by_title(tasks, &count, text);
            break;
        case 6:
            cout << "Enter priority: ";
            cin >> priority;
            search_by_priority(tasks, &count, priority);
            break;
        case 7:
            cout << "Enter part of description: ";
            cin.ignore();
            cin.getline(text, 100);
            search_by_description(tasks, &count, text);
            break;
        case 8:
            cout << "Enter date (YYYY-MM-DD): ";
            cin.ignore();
            cin.getline(text, 100);
            search_by_date(tasks, &count, text);
            break;
        case 9:
            cout << "Enter month (e.g. 2025-10): ";
            cin.ignore();
            cin.getline(text, 100);
            show_tasks_for_month(tasks, &count, text);
            break;
        case 10:
            sort_by_priority(tasks, &count);
            break;
        case 11:
            sort_by_deadline(tasks, &count);
            break;
        case 0:
            cout << "Goodbye!\n";
            return 0;
        default:
            cout << "Invalid choice!\n";
        }
    }
}