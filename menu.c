#include <stdio.h>
#include <ctype.h>
/*
 * String validation =)))
 */

int String_validation (int *x)
{
    static char buffer[101];
    scanf("%[^\n]99", buffer);
    fseek(stdin, 0, SEEK_END);
    *x = 0;
    for (int i = 0; buffer[i]; i++) {
        if(isdigit(buffer[i]))
            (*x) = (*x) * 10 + buffer[i] - 48;
        else  return 0;
    }
    return 1;
}

int main() {
    int rep = 1, k = 0;
    int *option;
    option = &k;

    while(rep) {
        printf("1. Instruction 1\n2. Instruction 2\n3. Instruction 3\n4. Exit\n");

        if (String_validation(option))
            switch (*option) {
                case 1:
                    printf("Instruction 1.\n");
                    //Do your thing
                    break;

                case 2:
                    printf("Instruction 2.\n");
                    //Do your thing
                    break;

                case 3:
                    printf("Instruction 3.\n");
                    //Do your thing
                    break;

                case 4:
                    rep = 0;
                    break;

                default:
                    printf("Input out of range [1, 4].\n");
                    break;
            }
        else {
            printf("Input not a number.\n");
        }
    }

    return 0;
}
