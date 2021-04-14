#ifndef _STUDENT_H_
#define _STUDENT_H_

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LEN 50


typedef struct {
    char name[MAX_NAME_LEN];
    int rno;
    char fees;
    float days;
    float attend;
}Student;

struct Node {
    Student student;
    struct Node *next;
};

void add();
void eligibleStudents();
void execute();
void printStudents();
void deleteRecord();

#endif
