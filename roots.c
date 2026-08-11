#include <stdio.h>
#include <math.h>
int main()
{
float b,a,c,root1,root2,discriminant;
printf("a*x^2+2*a*b+c\n");
printf("Enter Value of a:");
scanf("%f",&a);
printf("Enter Value of b:");
scanf("%f",&b);
printf("Enter Value of c:");
scanf("%f",&c);
discriminant=(b*b)-(4*a*c);
if ( discriminant > 0)
{
root1=(-b+sqrt(discriminant))/(2*a);
root2=(-b-sqrt(discriminant))/(2*a);
printf("The Roots the Given Values are:%f,%f",root1,root2);
}
else if (discriminant ==0)
{
root1=-b/(2*a);
root2=-b/(2*a);
printf("The Roots the Given Values are:%f,%f",root1,root2);
}
else 
{
printf("The Roots the Given Values are Imaginary");
}
return 0;
}
