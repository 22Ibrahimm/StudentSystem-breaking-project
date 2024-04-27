#include "user.h"
#include "admin.h"

int main()
{   int a;
    printf("----->WELCOME TO THE RECORD OF THE STUDENTS<-----\n");
    printf("Enter 1 for Admin mode , 2 for User mode\n");
    scanf("%d",&a);
switch(a){
case 1:
    passcheck();
    break;
//case 2:
//user();
break;
default:
    printf("Invalid Input");
    }
    return 0;
}
