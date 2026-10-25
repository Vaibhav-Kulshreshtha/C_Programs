#include <stdio.h>

int main() {
    int n, sum = 0;
    printf("till What number you want to add :\n>>> ");
    scanf("%d",&n);

    for (int i = 0; i <= n; i++)
    {
        sum += i;
    }

    printf("The sum of first %d nummbers is : %d\n", n, sum);
    
    return 0;
}