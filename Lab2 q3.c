//Compute all the roots of a quadratic equation using switch case statement.
//[Hint: x = (-b +/- sqrt(b2-4ac))/2a]

#include<stdio.h>
#include<math.h>
int main() {
int a,b,c;
float root1, root2, re, im, disc;
printf("enter the values of a");
scanf("%d", &a);
printf("enter the values of b");
scanf("%d", &b);
printf("enter the values of c");
scanf("%d", &c);
disc=b*b-4*a*c;
if (disc<0) // first if condition
{
printf("imaginary roots\n");
re= - b / (2*a);
im = pow(fabs(disc),0.5)/(2*a);
printf("%f +i %f",re,im);
printf("%f -i %f",re,im);
//printf("%f, re",“+ i”,im);
//cout<<re<<“-i”<<im;
}
else if (disc==0){ //2nd else-if condition
printf("real & equal roots");
re=-b / (2*a);
printf("Roots are %f",re);
}
else{ /*disc > 0- otherwise part with else*/
printf("real & distinct roots");
printf("Roots are");
root1=(-b + sqrt(disc))/(2*a);
root2=(-b - sqrt(disc))/(2*a);
printf("%f and %f",root1,root2);
}
return 0;
}
