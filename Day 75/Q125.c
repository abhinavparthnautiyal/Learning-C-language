//Q125: Open an existing file in append mode and allow the user to enter a new line of text. Append the text at the end without overwriting existing content.

/*
Sample Test Cases:
Input 1:
Existing File: data.txt (Content before execution: Hello world)
User Input: This is appended text.
Output 1:
File updated successfully with appended text.

*/
#include<stdio.h>
#include<string.h>

int main(){
    char filename[100],line[1000];
    printf("Enter filename:\n");
    scanf("%s",filename);
    FILE *f=fopen(filename,"a");
    if(f==NULL){
        printf("Error opening file");
        return 1;
    }
    getchar(); 
    printf("Enter text to append:\n");
    fgets(line,sizeof(line),stdin);
    line[strcspn(line,"\n")]=0;
    fprintf(f,"%s\n",line);
    fclose(f);
    printf("File updated successfully with appended text.");
    return 0;
}
