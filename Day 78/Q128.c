//Q128: Read a text file and count how many vowels and consonants are in the file. Ignore digits and special characters.

/*
Sample Test Cases:
Input 1:
File: text.txt (Content: Welcome to C language)
Output 1:
Vowels: 8
Consonants: 10

*/
#include<stdio.h>
#include<ctype.h>

int main(){
    FILE *f=fopen("text.txt","r");
    if(f==NULL){
        printf("Error opening file");
        return 1;
    }
    char ch;
    int vowels=0,consonants=0;
    while((ch=fgetc(f))!=EOF){
        if(isalpha(ch)){
            ch=tolower(ch);
            if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u') vowels++;
            else consonants++;
        }
    }
    fclose(f);
    printf("Vowels: %d\nConsonants: %d",vowels,consonants);
    return 0;
}
