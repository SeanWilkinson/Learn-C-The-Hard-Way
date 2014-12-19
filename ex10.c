// This program  

#include <stdio.h>

int main (int argc, char* argv[])
{
    int i = 0;
    
    // go through each string in argv
    for(i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        NULL, "Texas"
    };
    int num_states = 4;
    
    states[2] = "Washington";

    for(i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
        if (i == 2)
            break;
    }
 
    return 0;
}
