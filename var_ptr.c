#include<stdio.h>
int main(){
    double salary=4500.25;
    double *ptr=&salary;

    printf("Value of the salary: %f\n",*ptr);

    *ptr=*ptr*2;
    printf("Value of New salary: %f\n",*ptr);

    return 0;
}
 