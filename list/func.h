#pragma once
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
void show_task(Task tasks[], int* count);

// Видалення справи
void remove_task(Task tasks[], int* count, int index);

// Редагування справи
void edit_task(Task tasks[], int *count, int index);

// Пошук за назвою
void search_by_title(Task tasks[], int *count, const char title[]);

// Пошук за пріоритетом
void search_by_priority(Task tasks[], int *count, int priority);

// Пошук за описом
void search_by_description(Task tasks[], int *count, const char desc[]);

// Пошук за датою
void search_by_date (Task tasks[], int *count, const char deadline[]);

// Відображення завдань на день
void show_tasks_for_day(Task tasks[], int *count, const char date[]);

// Відображення завдань на тиждень
void show_tasks_for_week(Task tasks[], int *count, const char startDate[], const char endDate[]);

// Відображення завдань на місяць
void show_tasks_for_month(Task tasks[], int *count, const char month[]);

// Сортування за пріоритетом
void sort_by_priority(Task tasks[], int *count);

// Сортування за датою
void sort_by_deadline (Task tasks[], int *count);