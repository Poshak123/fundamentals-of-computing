#include<stdio.h> // include stdio.h

int main() 
{
    long int num, rev = 0;
    int rem;

    printf("Enter a number: ");
    scanf("%ld", &num);

    while(num != 0)
    {
        rem = num % 10;        // get the last digit of num
        rev = rev * 10 + rem;  // reverse the number
        num = num / 10;        // remove the last digit from num
    }

    printf("%ld", rev);

    return 0;
}
