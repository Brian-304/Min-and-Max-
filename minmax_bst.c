/*
Brian Tabios
Professor Chowdhury
Week 2 Assignment: Print min and max number
Course: CS111
*/

#include <stdio.h> 

int main() 

{
    float a;
    float b;
    float c;
    float largest;
    float smallest;

    printf("Enter first number: ");
    scanf("%f", &a);
    printf("Enter second number: ");
    scanf("%f", &b);
    printf("Enter third number: ");
    scanf("%f", &c);

    smallest = a;
    largest = a;

    if(b < smallest)
        smallest = b;

    if(c < smallest)
        smallest = c;

    if(b > largest) 
        largest = b;

    if(c > largest) 
        largest = c;

    printf("Smallest: %.1lf\n", smallest);
    printf("Largest: %.1lf", largest);

    return 0;


}