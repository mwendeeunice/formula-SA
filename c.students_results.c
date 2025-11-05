//creating files
/*
Name:Eunice Mwende
Reg:CT100/G/26231/25
*/
#include <stdio.h>


struct Student {
    char name[50];
    char regNo[20];
    float marks;
};

int main() {
    FILE *fp;
    struct Student s;

    fp = fopen("results.dat", "rb");
    if (fp == NULL) {
        printf("Error: results.dat not found.\n");
        return 1;
    }

    printf("=== Student Examination Results ===\n");

    while (fread(&s, sizeof(struct Student), 1, fp)) {
        printf("Name: %s\t Marks: %.2f\n", s.name, s.marks);
    }

    fclose(fp);

    return 0;
}