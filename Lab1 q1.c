//finding sum of 2 numbers using third variable
#include <stdio.h.>
int main ()
{
    int a,b,sum;//declare variables

    //prompt user to enter the first integer
    printf("enter the first integer: ");
    scanf("%d" , &a);

    //prompt user to enter the second integer
    printf("enter the second integer: ");
    scanf("%d", &b);

    //calculate the sum of 2 variables
    sum=a+b;

    //display the result
    printf("the sum of %d and %d is %d\n",a,b,sum);

    return 0;


}
