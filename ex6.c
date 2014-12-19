#include <stdio.h>

int main (int argc, char* argv[])
{
    int distance = 100;
    float power = 2.345f;
    double super_power = 56789.4532;
    char initial = 'M';
    char firstName[] = "Sean";
    char lastName[] = "Wilkinson";

    printf("You are %d miles away\n", distance);
    printf("You have %f levels of power.\n", power);
    printf("You have %f awesome super powers.\n", super_power);
    printf("%c is my middle initial.\n", initial);
    printf("My first name is %s.\n", firstName);
    printf("I have a last name. It is %s.\n", lastName);
    printf("My complete name is %s %c. %s.\n", 
            firstName, initial, lastName);

    return 0;
}

