//Q126: Ask the user for a filename. Check if it exists by trying to open it in read mode. If the file pointer is NULL, print an error message; otherwise, read and display its content.

/*
Sample Test Cases:
Input 1:
Filename: sample.txt (File Exists: Yes)
Output 1:
File opened successfully.
(Displays file content)

Input 2:
Filename: nofile.txt (File Exists: No)
Output 2:
Error: File does not exist!

*/
#include<stdio.h>

int main(){
    char filename[100],ch;
    printf("Enter filename:\n");
    scanf("%s",filename);
    FILE *f=fopen(filename,"r");
    if(f==NULL){
        printf("Error: File does not exist!");
        return 1;
    }
    printf("File opened successfully.\n");
    while((ch=fgetc(f))!=EOF) printf("%c",ch);
    fclose(f);
    return 0;
}
