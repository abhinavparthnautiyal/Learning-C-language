//Q140: Define a struct with enum Gender and print person's gender.

/*
Sample Test Cases:
Input 1:
Gender=MALE
Output 1:
Male

*/
#include<stdio.h>
#include<string.h>

int main(){
    enum Gender{MALE,FEMALE,OTHER};
    struct Person{
        enum Gender g;
    }p;
    char s[10];
    scanf("%s",s);
    if(strcmp(s,"MALE")==0) p.g=MALE;
    else if(strcmp(s,"FEMALE")==0) p.g=FEMALE;
    else p.g=OTHER;
    if(p.g==MALE) printf("Male");
    else if(p.g==FEMALE) printf("Female");
    else printf("Other");
    return 0;
}
