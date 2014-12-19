// enter your parents' names as argv[1] and argv[2]

#include <stdio.h>

int main(int argc, char* argv[])
{
    int i; // the loop for line 15

    if(argc == 1)
    {
        printf("You don't have parents?\n");
    }
    else if (argc > 1 && argc <= 3)
    {
        // loop through your parents' names.
        for (i = 1; i < argc; i++) 
        {
            printf("%s loves you.\n", argv[i]);    
        }
    }
    else
    {
        printf("You have more than two parents? "
               "Were you conceived at an orgy?\n"); 
    }
    return 0;
}
