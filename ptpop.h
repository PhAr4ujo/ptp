#ifndef PTPOP_H
#define PTPOP_H

#define CYAN    "\x1B[36m"
#define RESET   "\x1B[0m"
#define MAGENTA "\x1B[35m"


#include <stdio.h>

typedef struct patient {
    char name[100];
    int age;
    float weight;
    float height;
    float bmi;
} patient;

int list();

int create(FILE *f, patient *p);

int edit(FILE *f, patient *p, int id);

int destroy(FILE *f, patient *p, int id);

#endif
