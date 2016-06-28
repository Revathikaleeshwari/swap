#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
int n,i,oddsum=0,evensum=0;
clrscr();
printf("Enter the limit:");
scanf("%d",&n);
for(i=1;i<=n;i+2)
oddsum=oddsum+i;
for(i=2;i<=n;i=i+2)
evensum=evensum+1;
printf("\n The odd number sum is:%d",oddsum,evensum);
getch();
}
