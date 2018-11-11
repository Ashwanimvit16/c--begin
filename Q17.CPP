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
char key;
cout<<"\n Enter the character to be counted:";
cin>>key;
for(int i=0; i<strlen(st); i++)
if(st[i]==key)
sum=sum+1;
cout<<"\n Total Number of occurences:"<<sum;
getch();
}