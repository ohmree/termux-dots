#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <time.h>
#include <ctype.h>

int
main(int argc, char* argv[])
{
    time_t t;
    char* str = argv[1];
    int len = (int) strlen(str);
    srand((unsigned) time(&t));
    
    for (int i = 0; i <= len; i++) {
        int rand_num = rand();
        if (rand_num % 2) {
            if (!isalpha(str[i]) && !isspace(str[i])) {
               // break;
                puts("Letters only please");
                return EXIT_FAILURE;
            }
            str[i] = toupper(str[i]);
        }
    }

    printf("%s\n", str);
    return EXIT_SUCCESS;
}