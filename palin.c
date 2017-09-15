#include<stdio.h>
#include<conio.h>
void main()
{
int n,rem,rev=0;
int a;
clrscr();
while(n!=0)
{
rem=n%10;
rev=(rev*10)+rem;
n=n%10;
}
if(a==rev)
{
printf("palindrome");
}
else
{
printf("not palindrome");
}
getch();
}
