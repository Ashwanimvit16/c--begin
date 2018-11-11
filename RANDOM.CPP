//random function
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<stdlib.h>
void main()
{
clrscr();
int n,st[100];
cout<<"enter the no. of terms:";
cin>>n;
cout<<"entet the value of string:";
{
for(int i=1;i<=n;i++)
cin>>st[i];
}
int s=2,r=3,max;
max= random(r)+s;
for(int j=1;j<=2;j++)
cout<<st[max];
getch();
}