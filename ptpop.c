#include "ptpop.h"

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int list() {
    patient buffer;
    printf("Listing: \n");

    FILE *f = fopen("data.bin", "rb");

    while(fread(&buffer, sizeof(patient), 1, f) != 0) {
        system("clear");
        printf("*****************************************\n");
        printf(CYAN"*    Name: %s                  *\n", buffer.name);
        printf("*    Age: %i                             *\n", buffer.age);
        printf("*    Weight: %.1f                        *\n", buffer.weight);
        printf("*    Height: %.2f                        *\n", buffer.height);
        printf("*    BMI: %.1f                           *\n", buffer.bmi);
        printf(RESET"*****************************************\n");
        printf("\n");
    }

    printf(RESET"Press enter to back to menu");
    char opt = getchar();

    return 0;
};

int create(patient *p) {
    FILE *f = fopen("data.bin", "ab");
    system("clear");
    printf("New Patient \n");
    printf("Name: ");

    scanf(" %[^\n]", &p->name);

    printf("Age: ");
    scanf("%i", &p->age);

    printf("Weight: ");
    scanf("%f", &p->weight);

    printf("Height: ");
    scanf("%f", &p->height);

    p->bmi = (p->weight / (p->height * p->height));

    system("clear");
    printf(MAGENTA"Name: %s\n", p->name);
    printf("Age: %i\n", p->age);
    printf("Weight: %.1f\n", p->weight);
    printf("Height: %.2f\n", p->height);
    printf("BMI: %.1f\n\n", p->bmi);

    char opt;
    printf(RESET"You sure about insert this Pacient? (Y/n) ");
    scanf("%s", &opt);

    opt = toupper(opt);

    switch (opt) {
        case 'Y':
            printf("Creating");
            for (int i = 0; i < 3; i++) {
                printf(".");
                fflush(stdout);
                usleep(1000000);
            }
            fwrite(p, sizeof(patient), 1, f);
            system("clear");
            break;

        case 'N':
            printf("Not Creating\n");
            system("clear");
            break;

        default:
            printf("Option not valid\n");
            system("clear");
            break;
    }
    return 0;
}

int edit(FILE *f, patient *p, int id) {
    return 0;
}

int destroy(FILE *f, patient *p, int id) {

}
