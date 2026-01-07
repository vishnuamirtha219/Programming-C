#include<stdio.h>
int main(){

    char str[20];

    printf("Enter your String: ");
    fgets(str,sizeof(str),stdin);
    printf("\n%s",str);
    return 0;
}
