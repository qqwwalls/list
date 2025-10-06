#pragma once
const int MAX_TASKS = 100;
struct Task {
    char title[50];
    int priority;         // �������� (1 - �������, 2 - �������, 3 - �������)
    char description[100];
    char deadline[20];    // ����, ��� 
};
/********************/
// ��������� ������
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
// ³���������� ��� �����
void show_task(Task tasks[], int* count);

// ��������� ������
void remove_task(Task tasks[], int* count, int index);

// ����������� ������
void edit_task(Task tasks[], int *count, int index);

// ����� �� ������
void search_by_title(Task tasks[], int *count, const char title[]);

// ����� �� ����������
void search_by_priority(Task tasks[], int *count, int priority);

// ����� �� ������
void search_by_description(Task tasks[], int *count, const char desc[]);

// ����� �� �����
void search_by_date (Task tasks[], int *count, const char deadline[]);

// ³���������� ������� �� ����
void show_tasks_for_day(Task tasks[], int *count, const char date[]);

// ³���������� ������� �� �������
void show_tasks_for_week(Task tasks[], int *count, const char startDate[], const char endDate[]);

// ³���������� ������� �� �����
void show_tasks_for_month(Task tasks[], int *count, const char month[]);

// ���������� �� ����������
void sort_by_priority(Task tasks[], int *count);

// ���������� �� �����
void sort_by_deadline (Task tasks[], int *count);