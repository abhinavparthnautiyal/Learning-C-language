//Q129: A file numbers.txt contains a list of integers separated by spaces. Read all integers, compute their sum and average, and print both.

/*
Sample Test Cases:
Input 1:
File: numbers.txt (Content: 10 20 30 40 50)
Output 1:
Sum = 150
Average = 30.00

*/
#include<stdio.h>

int main(){
    FILE *f=fopen("numbers.txt","r");
    if(f==NULL){
        printf("Error opening file");
        return 1;
    }
    int num,sum=0,count=0;
    while(fscanf(f,"%d",&num)==1){
        sum+=num;
        count++;
    }
    fclose(f);
    if(count==0){
        printf("No numbers in file");
        return 0;
    }
    printf("Sum = %d\nAverage = %.2f",sum,(float)sum/count);
    return 0;
}
