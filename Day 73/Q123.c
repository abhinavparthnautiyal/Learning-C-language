//Q123: Read a text file and count the total number of characters, words, and lines. A word is defined as a sequence of non-space characters separated by spaces or newlines.

/*
Sample Test Cases:
Input 1:
File: sample.txt (Content: Hello world\nThis is C programming)
Output 1:
Characters: 31
Words: 5
Lines: 2

*/
#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *f=fopen("sample.txt","r");
    if(f==NULL){
        printf("Error opening file");
        return 1;
    }
    char ch;
    int chars=0,words=0,lines=0,inWord=0;
    while((ch=fgetc(f))!=EOF){
        chars++;
        if(ch=='\n') lines++;
        if(!isspace(ch)) inWord=1;
        else if(inWord){
            words++;
            inWord=0;
        }
    }
    if(inWord) words++;
    fclose(f);
    printf("Characters: %d\nWords: %d\nLines: %d",chars,words,lines);
    return 0;
}
