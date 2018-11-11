// to find the no of vowels, consonants,blank spaves and digits.
#include<iostream.h>
#include<conio.h>
#include<ctype.h>
#include<stdio.h>
#include<string.h>
void main()

{
clrscr();

  char st[80],ch;
  cout<<"enter the string:";
  gets(st);
  int c=0,v=0,b=0,d=0,spl=0;
  for(int i=0;i<strlen(st);i++)
  {
  {
  ch=tolower(st[i]);
   }
  if(isalnum(ch))
   if(isdigit(ch))
   d++;
   else
   if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')
   v++;
   else
   c++;
   else if(ch==' ')
   b++;
   else
   spl++;
   }
   cout<<"\nno of digits:"<<d;
   cout<<"\nno of vowels:"<<v;
   cout<<"\nno of consonants:"<<c;
   cout<<"\nno of blank spaces:"<<b;
   cout<<"\nno of special characters:"<<spl;
   getch();
   }