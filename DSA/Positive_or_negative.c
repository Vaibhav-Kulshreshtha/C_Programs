#include<stdio.h>

int main(){
    int num;
    printf("Enter the Number : \n>>> ");
    scanf("%d",&num);

    if (num < 0)
    {
        printf("Number is Negative.\n");
    }
    else{
        printf("Number is Positive.\n");
    }
    return 0;
}