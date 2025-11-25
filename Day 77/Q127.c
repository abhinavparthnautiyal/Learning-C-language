//Q127: Write a program that reads text from input.txt, converts all lowercase letters to uppercase, and writes the result to output.txt.

/*
Sample Test Cases:
Input 1:
Input File (input.txt): Hello World\nC programming
Output 1:
Output File (output.txt): HELLO WORLD\nC PROGRAMMING

*/
#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *in=fopen("input.txt","r");
    if(in==NULL){
        printf("Error opening input file");
        return 1;
    }
    FILE *out=fopen("output.txt","w");
    if(out==NULL){
        printf("Error opening output file");
        fclose(in);
        return 1;
    }
    char ch;
    while((ch=fgetc(in))!=EOF) fputc(toupper(ch),out);
    fclose(in);
    fclose(out);
    printf("File converted to uppercase and saved in output.txt");
    return 0;
}
