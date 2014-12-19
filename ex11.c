#include <stdio.h>

int main (int argc, char* argv[])
{
    printf("argv[0] = %s\n", argv[0]);
    printf("argv[1] = %s\n", argv[1]);
    printf("argv[2] = %s\n", argv[2]);
    printf("argv[3] = %s\n", argv[3]);

    printf("argc = %d\n", argc);
    
    // let's make our own array of strings
    char *states[] = {
        "California", "Oregon",
        "Washington", "Texas"
    };
    
    int num_states = 4;
    int k = num_states; // watch for this
    
    printf("\nprinting states backwards...\n\n");
    while (k > 0)
    {
        printf("state %d: %s\n", k, states[(k - 1)]);
        k--;
        if (k == 1 ) {
            printf("1st break worked!\n");
            break;
        }
    }
    // go through each string in argv
    printf("\nPushing states to the argv array...\n\n");

    int i = argc;
    //int j = 0;
    
    while (i >= 1)
    {
        //printf("argc%d: %s\n", (argc - (j+1)), argv[(i-1)]);
        argv[i] = states[(i-1)];  
        printf("argv[%d] = %s\n", i, argv[(i)]);
        i--;
        if (i == (argc - 2)){
            printf("2nd break worked!\n");
            break;
        }
        //j++;
    }
    
    /*printf("\nNo loops; just printing values manually to screen...\n"); 
    printf("argv[0] = %s\n", argv[0]);
    printf("argv[1] = %s\n", argv[1]);
    printf("argv[2] = %s\n", argv[2]);
    printf("argv[3] = %s\n", argv[3]);
    printf("argv[4] = %s\n", argv[4]);
*/
   return 0;
}
