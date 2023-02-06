#include<stdio.h>
int main()
{
    char lower,upper;
    printf("Enter any lowercase letter: ");
    scanf("%c",&lower);

    printf("The uppercase letter is: %c\n",lower-32);


    printf("Enter any uppercase letter: ");
    scanf("%c",&upper);

    printf("The lowercase letter is: %c",upper+32);
}
