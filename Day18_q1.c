
// Write a program to print all factors of a given number.

#include<stdio.h>
int main(){
    int num ;
    printf("Enter a number : ");
    scanf("%d",&num);

    printf("Factors of %d  are : ",num);



     for(int i = 1 ; i <=num ; i++){
        if(num%i==0){
            printf("%d ",i);
        }

    }
    return 0;
}

/*
Sample Test Cases:
Input 1:
6
Output 1:
1 2 3 6

Input 2:
10
Output 2:
1 2 5 10

*/
