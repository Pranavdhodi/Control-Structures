#include <stdio.h>
int main()
{
int year;
printf("Enter Any Year:");
scanf("%d",&year);
if ( year%4==0 && year%100!=0 || year%400==0)
{
printf("The Year is a Leap Year");
}
else 
{
printf("The Year not a Leap Year");
}
return 0;
}
