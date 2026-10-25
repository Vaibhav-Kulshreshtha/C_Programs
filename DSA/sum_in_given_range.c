#include <stdio.h>

int Including(int num1, int num2){
    int sum = 0;
    int i;
    for (i = num1; i <= num2; i++)
    {
        sum +=  i;
    }
    printf("The Sum of your given range from %d - %d including %d is : %d\n", num1, num2, num2, sum);
    return sum;
}

int Excluding(int num1, int num2){
    int sum = 0;
    int i;
    for (i = num1; i < num2; i++)
    {
        sum +=  i;
    }
    printf("The Sum of your given range from %d - %d excluding %d is : %d\n", num1, num2, num2, sum);
    
    return sum;
}


int main()
{
    int num1, num2, choice, sum = 0;
    printf("Enter the starting number of your range : ");
    scanf("%d", &num1);
    printf("Enter the last number of your range : ");
    scanf("%d", &num2);

    printf("1. Sum INCLUDING last number of range.\n2. Sum EXCLUDING last number of range\n >>> ");
    scanf("%d", &choice);
    
    switch (choice)
    {
        case 1:
          sum = Including(num1, num2);
            break;
        
        case 2:
           sum = Excluding(num1, num2);
            break;

        default:
            printf("Invalid choice.\n");
            break;
    }
    
    return 0;
}