#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,n,s=0,t;
cout<<"enter the no:";
cin>>n;
n=i;
while(n>0)
{
 t=n%10;
 s=s+t*t*t;
 n=n/10;
 }
 if(i==s)
 cout<<"armstrong number";
 else
 cout<<"not an armstrong no";
 }