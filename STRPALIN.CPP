#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
clrscr();
char str[80];
cout<<"enter the  string:";
cin>>str;
char palin='t';
for(int i=0;i<=strlen(str)/2;i++)
 if(str[i]!=str[strlen(str)-1-i])
 palin='f';
 if(palin=='f')
 cout<<"not palindrom";
 else
 cout<<"palindrom";
 getch();
 }