// to print the initial of the name
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char st[80];
int i;
cout<<"enter your name;";
gets(st);
i=strlen(st)-1;
for(int j=i;j>=0;j--)
 if(st[j]==' ')
 break;
 cout<<st[0]<<".";

 for(int k=0;k<j;k++)
 if(st[k]==' ')
 cout<<st[k+1]<<".";
  j++;
      for( ;j<=i;j++)
 cout<<st[j];


    getch();
 }