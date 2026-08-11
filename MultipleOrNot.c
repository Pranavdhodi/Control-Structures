#include <stdio.h>
int main()
{
int a,b,c;
printf("Enter First Number:\n");
scanf("%d",&a);
printf("Enter Second Number:\n");
scanf("%d",&b);
c=(a) % (b);
if (c==0)
printf("%d is a Multiple of %d",a,b);
else 
printf("%d is Not a Multiple of %d",a,b);
return 0;
}

