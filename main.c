#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include "ptpop.h"

#define RESET   "\x1B[0m"
#define MAGENTA "\x1B[35m"
#define CYAN    "\x1B[36m"

int main(void)
{
    patient *p = malloc(sizeof(patient));
    create(NULL, p);
    free(p);
    return 99;
    string filePath = malloc(sizeof(char) * 2096);
    string cwd = malloc(sizeof(char) * 2048);
    cwd = getcwd(cwd, 2048);


    if(cwd == NULL) {
        printf("Working directory univalible \n");
        free(filePath);
        free(cwd);
        return 1;
    }

    snprintf(filePath, 4096, "%s/data.bin", cwd);

    FILE *data = fopen(filePath, "ab");

    free(filePath);
    free(cwd);

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
                break;

            case '2':
                break;

            case '3':
                break;

            case '4':
                break;

            case '0':
                continue;
            default:
                printf("Invalid option!");
        }
        getc(stdin);
    }
    return 0;
}
