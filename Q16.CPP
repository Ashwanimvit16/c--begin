#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char st[50];
cout<<"\n Enter a String:";
gets(st);
int sum=0;
for(int i=0; i<strlen(st); i++)
if(st[i]==' ')
sum=sum+1;
cout<<"\n Total Number of spaces:"<<sum;
getch();
}