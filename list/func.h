#pragma once
// Прототипи функцій

// Додавання справи
void add_task(Task tasks[], int& count);

// Видалення справи
void remove_task(Task tasks[], int& count, int index);

// Редагування справи
void editTask(Task tasks[], int count, int index);

// Відображення всіх справ
void showTasks(Task tasks[], int count);

// Пошук за назвою
void searchByTitle(Task tasks[], int count, const char title[]);

// Пошук за пріоритетом
void searchByPriority(Task tasks[], int count, int priority);

// Пошук за описом
void searchByDescription(Task tasks[], int count, const char desc[]);

// Пошук за датою
void searchByDate(Task tasks[], int count, const char deadline[]);

// Відображення завдань на день
void showTasksForDay(Task tasks[], int count, const char date[]);

// Відображення завдань на тиждень
void showTasksForWeek(Task tasks[], int count, const char startDate[], const char endDate[]);

// Відображення завдань на місяць
void showTasksForMonth(Task tasks[], int count, const char month[]);

// Сортування за пріоритетом
void sortByPriority(Task tasks[], int count);

// Сортування за датою
void sortByDeadline(Task tasks[], int count);