#include <stdio.h>
#include <stdlib.h>
#ifndef LIST_H_INCLUDED
#define LIST_H_INCLUDED

typedef struct{
char name[30];
short grade;
short id;
short age;
char gender[7];
char password[20];
}record;
int counting=0;

record students[1000];


#endif // LIST_H_INCLUDED
