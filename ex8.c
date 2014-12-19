#include <stdio.h>
#include <string.h>

int main(int argc, char *argv[])
{
    int areas[] = {10, 12, 13, 14, 20};
    char name[] = "Sean";
    char full_name[] = {
        'S', 'e', 'a', 'n',
        ' ', 'M', '.', ' ',
        'W', 'i', 'l', 'k', 'i', 'n', 's', 'o', 'n', '\0'
        };
    // Warning: on some systems you may have to change the
    // %ld in this code to a %u since it will use unsigned ints
    // In my case, I did have to - SMW
    printf("The size of an int: %d\n", sizeof(int));
    printf("The size of areas (int[]): %d\n",
            sizeof(areas));
    printf("The number of ints in areas: %d\n",
        sizeof(areas) / sizeof(int));
    printf("The first area is %d, the 2nd %d.\n",
            areas[0], areas[1]);

    printf("The size of a char: %d\n", sizeof(char));
    printf("The size of name (char[]): %d\n",
            sizeof(name));
    printf("The number of chars: %d\n",
            sizeof(name) /  sizeof(char));

    printf("The size of full_name (char[]): %d\n",
            sizeof(full_name));
    printf("The number of chars: %d\n",
            sizeof(full_name) / sizeof(char));

    printf("my first name is \"%s\" and my surname is \"%s\"\n",
            name, strstr (full_name, "Wilkinson"));
            
    return 0;
}
