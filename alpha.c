#include<stdio.h>
int main()
{
char x;
printf("Enter any character");
scanf("%d",&x);
if( (x >= 'a' && x <= 'z')||(x >= 'A' && x <= 'Z' ) )
{
printf("Alphabet",x);
}
else
{
printf("Not alphabet",x);
}
return 0;
}
