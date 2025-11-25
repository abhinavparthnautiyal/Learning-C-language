//Q130: Store multiple student records (name, roll number, marks) into a file using fprintf(). Then read them using fscanf() and display each record.

/*
Sample Test Cases:
Input 1:
Student 1 → Name: Asha, Roll: 101, Marks: 85; Student 2 → Name: Ravi, Roll: 102, Marks: 92
Output 1:
Name: Asha | Roll: 101 | Marks: 85
Name: Ravi | Roll: 102 | Marks: 92

*/
#include<stdio.h>

int main(){
    int n,i,roll,marks;
    char name[100];
    printf("Enter number of students:\n");
    scanf("%d",&n);
    FILE *f=fopen("students.txt","w");
    if(f==NULL){
        printf("Error opening file");
        return 1;
    }
    for(i=0;i<n;i++){
        printf("Enter name, roll, marks:\n");
        scanf("%s %d %d",name,&roll,&marks);
        fprintf(f,"%s %d %d\n",name,roll,marks);
    }
    fclose(f);
    f=fopen("students.txt","r");
    if(f==NULL){
        printf("Error opening file");
        return 1;
    }
    while(fscanf(f,"%s %d %d",name,&roll,&marks)==3){
        printf("Name: %s | Roll: %d | Marks: %d\n",name,roll,marks);
    }
    fclose(f);
    return 0;
}
