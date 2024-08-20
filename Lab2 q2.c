//Find the  largest among given numbers

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter the 1st number: ");
    scanf("%d", &a);
    printf("enter the 2nd number: ");
    scanf("%d", &b);
    printf("enter the 3rd number: ");
    scanf("%d", &c);
    if (a>b & a>c)
        printf("a is the largest number!,%d", a);
    else if (b>c & b>a)
         printf("b is the largest number!,%d", b);
    else
        printf("c is the largest number!,%d", c);
    return 0;



}
