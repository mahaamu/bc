#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char str[20],temp;
int i,j;
printf("enter a string");
scanf("%s",str);
printf("original string:%s",str);
for(i=0;i<strlen(str);i=i+2)
{
temp=str[i];
str[i]=str[i+1];
str[i+1]=temp;
}
printf("after swap string:%s",str);
}
