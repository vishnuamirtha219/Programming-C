#include <stdio.h>
int main(){
    int  age=22;
    int *ptr=&age;
    
    printf("Address of age:%p\n",ptr);
    printf("Value of age:%d\n",*ptr);

    return 0;

}