#include <stdio.h>
int main(){
    int a =5;
    int b=10;

    int temp=a;
    a =b;
    b=temp;

    printf("After Swapping:\n");
    printf("a=%d\n",a);
    printf("b=%d\n",b);
}