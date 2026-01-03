#include <stdio.h>
int main(){
    //Declaration multidimensional array
    //Initialization of multidimensional array
    int arr[2][3]={{1,4,2},{6,7,8}};

    //Access Array Elements
    printf("First Array: %d\n",arr[0][1]);
    printf("Second Array: %d\n",arr[1][2]);

    //Change Array Indexes
    arr[0][1]=3;
    arr[1][2]=5;
    printf("Refined First Array: %d\n",arr[0][2]);
    printf("Refined Second Array: %d",arr[1][2]);

    return 0;
}