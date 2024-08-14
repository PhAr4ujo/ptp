#ifndef PTPOP_H
#define PTPOP_H

#include <stdio.h>

typedef char *string;

typedef struct patient {
    string name;
    int age;
    float weight;
    float height;
    float bmi;
} patient;

int list(FILE *f);

int create(FILE *f, patient *p);

int edit(FILE *f, patient *p, int id);

int destroy(FILE *f, patient *p, int id);

#endif
