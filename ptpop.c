#include "ptpop.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int list(FILE *f) {
    printf("listing \n");
    return 0;
};

int create(FILE *f, patient *p) {
    system("clear");
    printf("New Patient \n");
    printf("Name: ");

    p->name = malloc(sizeof(char) * 50);
    scanf(" %[^\n]", p->name);

    printf("name: %s\n", p->name);
    return 0;
}

int edit(FILE *f, patient *p, int id) {
    return 0;
}

int destroy(FILE *f, patient *p, int id) {

}
