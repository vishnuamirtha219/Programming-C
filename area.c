#include<stdio.h>
int main(){
    float pi=3.14;
    float radius;

    printf("Enter the radius of the circle: ");
    scanf("%f",&radius);

    float aoc=pi*radius*radius;
    float poc=2*pi*radius;

    printf("Area of the circle: %.2f",aoc);
    printf("\nPerimeter of the circle: %.2f",poc);

    return 0;
}


   

  
