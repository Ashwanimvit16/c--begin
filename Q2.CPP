#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
char st[50], ch[50], ak[50];
cout<<"\n Enter the value for the three strings:";
gets(st);
gets(ch);
gets(ak);

if(strcmp(st,ch)>0)
{
  if(strcmp(st,ak)>0)
  cout<<"\n Biggest String is:"<<st;
  else
  cout<<"\n Biggest String is:"<<ak;
  }
  else
  {
  if(strcmp(ch,ak)>0)
  cout<<"\n Biggest String is:"<<ch;
  else
  cout<<"\n Biggest string is:"<<ak;
  }

if(strcmp(st,ch)<0)
{
if(strcmp(st,ak)<0)
cout<<"\n Smallest String is:"<<st;
else
cout<<"\n Smallest String is:"<<ak;
}

else if(strcmp(ch,ak)<0)
cout<<"\n Smallest string is:"<<ch;
else
cout<<"\n Smallest String is:"<<ak;
getch();
}

