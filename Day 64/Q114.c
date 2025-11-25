//Q114: Write a program to take a string s as input. The task is to find the length of the longest substring without repeating characters. Print the length as output.

/*
Sample Test Cases:
Input 1:
s = "abcabcbb"
Output 1:
3

Input 2:
s = "bbbbb"
Output 2:
1

Input 3:
s = "pwwkew"
Output 3:
3

*/
#include<stdio.h>
#include<string.h>

int main(){
    char s[1000];
    scanf("%s",s);
    int i,left=0,max=0,freq[256]={0};
    for(i=0;s[i];i++){
        freq[(int)s[i]]++;
        while(freq[(int)s[i]]>1){
            freq[(int)s[left]]--;
            left++;
        }
        if(i-left+1>max) max=i-left+1;
    }
    printf("%d",max);
    return 0;
}
