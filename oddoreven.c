#include <stdio.h>
int main()
{
int x,n;
printf("Enter a Number:");
scanf("%d",&x);
n=x%2;
if (n==0)
{
printf("%d Number is an Even Number",x);
}
else 
{
printf(" %d Number is an Odd Number",x);
}
return 0;

}
