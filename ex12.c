#include <stdio.h>

int main(int argc, char *argv[])
{
    int i = 0;

    if(argc == 1) {
        printf("You only have one argument? You suck!\n");
    } else if(argc > 1 && argc < 4) {
        printf("Here's your arguments:\n");

        for (i=0; i < argc; i++) {
            printf("argv[%d] is %s\n", i,  argv[i]);
        }
        printf("\n");
    } else {
            printf("You have too many arguments. You suck.\n");
    }

    printf("easter eggs are my favorite candy.\n");
    return 0;
}
