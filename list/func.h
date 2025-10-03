#pragma once
// ��������� �������

// ��������� ������
void add_task(Task tasks[], int& count);

// ��������� ������
void remove_task(Task tasks[], int& count, int index);

// ����������� ������
void editTask(Task tasks[], int count, int index);

// ³���������� ��� �����
void showTasks(Task tasks[], int count);

// ����� �� ������
void searchByTitle(Task tasks[], int count, const char title[]);

// ����� �� ����������
void searchByPriority(Task tasks[], int count, int priority);

// ����� �� ������
void searchByDescription(Task tasks[], int count, const char desc[]);

// ����� �� �����
void searchByDate(Task tasks[], int count, const char deadline[]);

// ³���������� ������� �� ����
void showTasksForDay(Task tasks[], int count, const char date[]);

// ³���������� ������� �� �������
void showTasksForWeek(Task tasks[], int count, const char startDate[], const char endDate[]);

// ³���������� ������� �� �����
void showTasksForMonth(Task tasks[], int count, const char month[]);

// ���������� �� ����������
void sortByPriority(Task tasks[], int count);

// ���������� �� �����
void sortByDeadline(Task tasks[], int count);