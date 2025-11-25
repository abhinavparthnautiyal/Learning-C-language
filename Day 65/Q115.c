//Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase). The task is to determine if s and t are valid anagrams, meaning they contain the same characters with the same frequencies. Print "Anagram" if they are, otherwise "Not Anagram".

/*
Sample Test Cases:
Input 1:
s = "anagram", t = "nagaram"
Output 1:
Anagram

Input 2:
s = "rat", t = "car"
Output 2:
Not Anagram

*/
#include<stdio.h>
#include<string.h>

int main(){
    char s[1000],t[1000];
    int f1[26]={0},f2[26]={0},i;
    scanf("%s",s);
    scanf("%s",t);
    if(strlen(s)!=strlen(t)){
        printf("Not Anagram");
        return 0;
    }
    for(i=0;s[i];i++){
        f1[s[i]-'a']++;
        f2[t[i]-'a']++;
    }
    for(i=0;i<26;i++){
        if(f1[i]!=f2[i]){
            printf("Not Anagram");
            return 0;
        }
    }
    printf("Anagram");
    return 0;
}
