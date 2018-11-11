// to add a string at the back of first one
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void main()
{
char st[100],s2[100];
cout<<"enter the string:";
gets (st);
cout<<"enter the string:																			      ";
gets(s2);
strcat(st,s2);
cout<<st;
cout<<"\n"<<s2;
getch();
}



