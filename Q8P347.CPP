/*write a c++ function that intakes two arguments a character and an integer
and prints the charcter given number of times.*/
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
void cpy(char ch, int n=2)
{
for(int i=1;i<=n;i++)
cout<<ch;
}
void main()
{
clrscr();
char part;
int x;
cout<<"\n ENter a character:";
cin>>part;
cout<<"\n Enter the number of times to be printed:";
cin>>x;

cpy(part, x);
getch();
}


