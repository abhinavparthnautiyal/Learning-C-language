//Q121: Write a C program that creates a text file named info.txt in write mode. The program should take the user’s name and age as input, and write them to the file using fprintf(). After writing, display a message confirming that the data was successfully saved.

/*
Sample Test Cases:
Input 1:
Name: Rahul, Age: 23
Output 1:
File created successfully! Data written to info.txt

*/
#include<stdio.h>

int main(){
    FILE *f=fopen("info.txt","w");
    if(f==NULL){
        printf("Error opening file");
        return 1;
    }
    char name[100];
    int age;
    printf("Enter name:\n");
    scanf("%s",name);
    printf("Enter age:\n");
    scanf("%d",&age);
    fprintf(f,"Name: %s, Age: %d\n",name,age);
    fclose(f);
    printf("File created successfully! Data written to info.txt");
    return 0;
}
