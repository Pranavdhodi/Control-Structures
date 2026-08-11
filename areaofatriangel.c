#include <stdio.h>
int main()
{
int a,b,c,area;
printf("Enter three sides of a triangle:\n");
printf("a=");
scanf("%d",&a);
printf("b=");
scanf("%d",&b);
printf("c=");
scanf("%d",&c);
area=(a+b+c)/2;
if (a+b > c || b+c > a || a+c > b)
printf("The Area of the given Triangle is :%d",area);
else 
printf("The Area of the given Triangle cannot be found");
return 0;
}




