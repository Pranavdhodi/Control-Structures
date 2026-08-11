#include <stdio.h>
int main()
{
int year,month;
printf("Enter a month:");
scanf("%d",&month);
switch (month)
{
case 1: 31;
printf("31");
break;
case 2: printf("Enter Any Year:");
scanf("%d",&year);
if ( year%4==0 && year%100!=0 || year%400==0)
{
printf("The Number of Days in That Month:31+29");
}
else 
{
printf("The Number of Days in That Month:31+28");
} 
break;
case 3: 31;
if ( year%4==0 && year%100!=0 || year%400==0)
{
printf("The Number of Days in That Month:31+29+31");
}
else 
{
printf("The Number of Days in That Month:31+28+31");
} 
break;
case 4: 30;
if ( year%4==0 && year%100!=0 || year%400==0)
{
printf("The Number of Days in That Month:31+29+31+30");
}
else 
{
printf("The Number of Days in That Month:31+28+31+30");
} 
break;
case 5: 31;
if ( year%4==0 && year%100!=0 || year%400==0)
{
printf("The Number of Days in That Month:31+29+31+30+31");
}
else 
{
printf("The Number of Days in That Month:31+28+31+30+31");
} 
break;
case 6: 30;
if ( year%4==0 && year%100!=0 || year%400==0)
{
printf("The Number of Days in That Month:31+29+31+30+31+30");
}
else 
{
printf("The Number of Days in That Month:31+28+31+30+31+30");
} 
break;
case 7: 31;
if ( year%4==0 && year%100!=0 || year%400==0)
{
printf("The Number of Days in That Month:31+29+31+30+31+30+31");
}
else 
{
printf("The Number of Days in That Month:31+28+31+30+31+30+31");
} 
break;
case 8: 31;
if ( year%4==0 && year%100!=0 || year%400==0)
{
printf("The Number of Days in That Month:31+29+31+30+31+30+31+31");
}
else 
{
printf("The Number of Days in That Month:31+28+31+30+31+30+31+31");
} 
break;
case 9: 30;
if ( year%4==0 && year%100!=0 || year%400==0)
{
printf("The Number of Days in That Month:31+29+31+30+31+30+31+31+30");
}
else 
{
printf("The Number of Days in That Month:31+28+31+30+31+30+31+31+30");
} 
break;
case 10: 31;
if ( year%4==0 && year%100!=0 || year%400==0)
{
printf("The Number of Days in That Month:31+29+31+30+31+30+31+31+30+31");
}
else 
{
printf("The Number of Days in That Month:31+28+31+30+31+30+31+31+30+31");
} 
break;
case 11: 30;
if ( year%4==0 && year%100!=0 || year%400==0)
{
printf("The Number of Days in That Month:31+29+31+30+31+30+31+31+30+31+30");
}
else 
{
printf("The Number of Days in That Month:31+28+31+30+31+30+31+31+30+31+30");
} 
break;
case 12: 31;
if ( year%4==0 && year%100!=0 || year%400==0)
{
printf("The Number of Days in That Month:31+29+31+30+31+30+31+31+30+31+30+31");
}
else 
{
printf("The Number of Days in That Month:31+28+31+30+31+30+31+31+30+31+30+31");
} 

break;
default:printf("wrong choice");
}
return 0;
}

