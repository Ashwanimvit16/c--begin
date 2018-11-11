// to calc the no of vowels strings nad constants
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
clrscr();
char st[80];
int v=0,c=0,s=0;
cout<<"\nenter the string:";
gets(st);
for(int i=0;i<=strlen(st)-1;i++)
{
 if(st[i]=='a'||st[i]=='e'||st[i]=='i'||st[i]=='o'||st[i]=='u'||st[i]=='A'||st[i]=='E'||st[i]=='I'||st[i]=='O'||st[i]=='U')
 v=v++;
 else if((st[i]>='a'&&st[i]<='z')||(st[i]>='A'&&st[i]<='Z'))
 c=c++;
 else
 s++;
 }
 cout<<"\nno of vowels:"<<v;
 cout<<"\nno of special characters:"<<s;
 cout<<"\nno of consonants:"<<c;
 getch();
 }