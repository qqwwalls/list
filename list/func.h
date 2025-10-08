#pragma once
#include <iostream>
using namespace std;
const int MAX_TASKS = 100;
struct Task {
    char title[50];
    int priority;         // Пріоритет (1 - низький, 2 - середній, 3 - високий)
    char description[100];
    char deadline[20];    // Дата, час 
};
/********************/
// Додавання справи
void add_task(Task tasks[], int* count) {
    if (*count >= MAX_TASKS) {                
        cout << "List overflow!\n";
        return;
    }

    cout << "Enter name: ";
    cin.ignore();                               
    cin.getline(tasks[*count].title, 50);     

    cout << "Enter priority (1-low,2-middle,3-high): ";
    cin >> tasks[*count].priority;
    cin.ignore();

    cout << "Enter description: ";
    cin.getline(tasks[*count].description, 100);

    cout << "Enter date and time: ";
    cin.getline(tasks[*count].deadline, 20);

    (*count)++;                              
    cout << "List done!\n";
}
// Відображення всіх справ
void show_task(Task tasks[], int* count) {
    if (*count == 0) {
        cout << "List is empty!\n";
        return;
    }
    for (int i = 0; i < *count; i++) {
        cout << "\n--- List " << i + 1 << " ---\n";
        cout << "Name: " << tasks[i].title << '\n';
        cout << "Priority: " << tasks[i].priority << '\n';
        cout << "Description: " << tasks[i].description << '\n';
        cout << "Date and time: " << tasks[i].deadline << '\n';
    }
}

// Видалення справи
void remove_task(Task tasks[], int* count, int index) {
    if (index < 0 || index >= *count) {
        cout << "Wrong number!\n";
        return;
    }
    for (int i = index; i < *count - 1; i++) {
        tasks[i] = tasks[i + 1];  
    }
    (*count)--;
    cout << "Task is deleted!\n";
}

// Редагування справи
void edit_task(Task tasks[], int *count, int index){
    if (index < 0 || index >= *count) {
        cout << "Invalid index!\n";
        return;
    }

    cout << "Editing task: " << tasks[index].title << endl;

    cout << "Enter new name: ";
    cin.ignore();
    cin.getline(tasks[index].title, 50);

    cout << "Enter new priority (1-3): ";
    cin >> tasks[index].priority;
    cin.ignore();

    cout << "Enter new description: ";
    cin.getline(tasks[index].description, 100);

    cout << "Enter new date: ";
    cin.getline(tasks[index].deadline, 20);

    cout << "Task updated!\n";
}

// Пошук за назвою
void search_by_title(Task tasks[], int* count, const char title[]) {
    cout << "\nSearch by title:\n";
    for (int i = 0; i < *count; i++)
        if (strstr(tasks[i].title, title))
            cout << i + 1 << ". " << tasks[i].title << endl;
}

// Пошук за пріоритетом
void search_by_priority(Task tasks[], int* count, int priority) {
    cout << "\nSearch by priority " << priority << ":\n";
    for (int i = 0; i < *count; i++)
        if (tasks[i].priority == priority)
            cout << i + 1 << ". " << tasks[i].title << endl;
}
// Пошук за описом
void search_by_description(Task tasks[], int* count, const char desc[]) {
    cout << "\nSearch by description:\n";
    for (int i = 0; i < *count; i++)
        if (strstr(tasks[i].description, desc))
            cout << i + 1 << ". " << tasks[i].title << endl;
}

// Пошук за датою
void search_by_date(Task tasks[], int* count, const char deadline[]) {
    cout << "\nSearch by date:\n";
    for (int i = 0; i < *count; i++)
        if (strcmp(tasks[i].deadline, deadline) == 0)
            cout << i + 1 << ". " << tasks[i].title << endl;
}

// Відображення завдань на день
void show_tasks_for_day(Task tasks[], int* count, const char date[]) {
    cout << "\nTasks for day " << date << ":\n";
    for (int i = 0; i < *count; i++)
        if (strcmp(tasks[i].deadline, date) == 0)
            cout << tasks[i].title << endl;
}

// Відображення завдань на тиждень
void show_tasks_for_week(Task tasks[], int* count, const char startDate[], const char endDate[]) {
    cout << "\n(Week " << startDate << " - " << endDate << "):\n";
    for (int i = 0; i < *count; i++)
        cout << tasks[i].title << " | " << tasks[i].deadline << endl;
}

// Відображення завдань на місяць
void show_tasks_for_month(Task tasks[], int *count, const char month[]);

// Сортування за пріоритетом
void sort_by_priority(Task tasks[], int *count);

// Сортування за датою
void sort_by_deadline (Task tasks[], int *count);