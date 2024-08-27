#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ptpop.h"

int main(void)
{
    patient *p = malloc(sizeof(patient));

    system("clear");
    printf("\n");
    printf(CYAN" ██████╗ ████████╗██████╗ \n");
    printf(" ██╔══██╗╚══██╔══╝██╔══██╗\n");
    printf(" ██████╔╝   ██║   ██████╔╝\n");
    printf(" ██╔═══╝    ██║   ██╔═══╝ \n");
    printf(" ██║        ██║   ██║     \n");
    printf(" ╚═╝        ╚═╝   ╚═╝     \n\n");


    printf(RESET"Welcome to Pacient Track Painel!\n");
    printf("Press Enter to continue\n");
    char opt = getchar();

    system("clear");

    while (opt != '0') {
        printf("Options: \n");
        printf("*****************************************\n");
        printf("*                                       * \n");
        printf("* 1-Insertion                           * \n");
        printf("* 2-Edition                             * \n");
        printf("* 3-Deletion                            * \n");
        printf("* 4-List                                * \n");
        printf("*                                       * \n");
        printf("* 0-Exit                                * \n");
        printf("*****************************************\n");

        opt = getchar();

        switch (opt) {
            case '1':
                create(p);
                break;

            case '2':
                break;

            case '3':
                break;

            case '4':
                printf("teste: %p\n", data);
                list();
                break;

            case '0':
                continue;
            default:
                printf("Invalid option!");
        }
        getc(stdin);
    }

    free(p);
    return 0;
}
