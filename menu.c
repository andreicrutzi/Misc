#include <stdio.h>
#include <ctype.h>
/*
 * I know it's just a menu
 * but at least it does its job well.
 * Not the best but I am proud of it
 */
int main() {
    char buffer[50];
    int rep = 1, option, i;

    while(rep) {
        option = 0;
        printf("1. Instruction 1\n2. Instruction 2\n3. Instruction 3\n4. Exit\n");
        scanf("%[^\n]48", buffer);
        fseek(stdin, 0, SEEK_END);

        for (i = 0; buffer[i]; i++) {
            if(isdigit(buffer[i]))
                option = option * 10 + buffer[i] - 48;
            else {
                option = 0;
                break;
            }
        }

        if (option)
            switch (option) {
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
