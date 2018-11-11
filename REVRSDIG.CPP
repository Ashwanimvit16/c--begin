//to reverse the digits
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long i,n,s=0,t;
cout<<"enter the no:";
cin>>n;
n=i;
clrscr();
cout<<"before reversing the no is:"<<i;
while(n>0)
{
 t=n%10;
 s=(s*10)+t;
 n=n/10;
 }
 cout<<"\n after reversing the no is:"<<s;
 getch();
 }