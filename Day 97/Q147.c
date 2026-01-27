/*
Q147: Store employee data in a binary file using fwrite() and read using fread().

Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>
struct Employee{
    int id;
    char name[50];
    float salary;
};
int main(){
    FILE *fp;
    struct Employee e1, e2;
    printf("Enter ID, Name, Salary: ");
    scanf("%d %s %f", &e1.id, e1.name, &e1.salary);
    fp = fopen("emp.bin", "wb");
    if(fp == NULL) return 1;
    fwrite(&e1, sizeof(struct Employee), 1, fp);
    fclose(fp);
    fp = fopen("emp.bin", "rb");
    if(fp == NULL) return 1;
    if(fread(&e2, sizeof(struct Employee), 1, fp)){
        printf("\nID: %d\nName: %s\nSalary: %.2f\n", e2.id, e2.name, e2.salary);
    }
    fclose(fp);
    return 0;
}