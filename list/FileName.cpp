#include<iostream>
#include"func.h"
using namespace std;
int main() {
    Task tasks[100];
    int count = 0;

    add_task(tasks, &count);
    show_task(tasks, &count);
	return 0;
}