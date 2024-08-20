//Find the smallest among three numbers using conditional operator
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
    if (a<b & a<c)
        printf("a is the smallest number which is %d", a);
    else if (b<c & b<a)
         printf("b is the smallest number which is %d", b);
    else
        printf("c is the smallest number which is %d", c);
    return 0;
}
