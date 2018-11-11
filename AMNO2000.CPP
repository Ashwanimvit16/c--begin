//armstrong no upto 20000
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,s=0,t,temp;
for(int i=1;i<=20000;i++)
{
n=i;
s=0;
temp=n;
while(n>0)
{
 t=n%10;
 s=s+t*t*t;
 n=n/10;
 }
 if(temp==s)
 cout<<temp<<"\t";
 }
 getch();
 }