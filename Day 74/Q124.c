//Q124: Take two filenames from the user – a source file and a destination file. Copy all the content from the source file to the destination file using fgetc() and fputc().

/*
Sample Test Cases:
Input 1:
Source File: source.txt (Content: Learning C File Handling)
Output 1:
File copied successfully to destination.txt

*/
#include<stdio.h>

int main(){
    char src[100],dest[100];
    printf("Enter source filename:\n");
    scanf("%s",src);
    printf("Enter destination filename:\n");
    scanf("%s",dest);
    FILE *f1=fopen(src,"r");
    if(f1==NULL){
        printf("Error opening source file");
        return 1;
    }
    FILE *f2=fopen(dest,"w");
    if(f2==NULL){
        printf("Error opening destination file");
        fclose(f1);
        return 1;
    }
    char ch;
    while((ch=fgetc(f1))!=EOF) fputc(ch,f2);
    fclose(f1);
    fclose(f2);
    printf("File copied successfully to %s",dest);
    return 0;
}
