//to find out factorial sum
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float n,sum=0;
cout<<"entre the value of n:";
cin>>n;
for(int i=1;i<=n;i++)
{
 int m=(2*i)-1,f=1;
 for(int j=m;j>0;j--)
{ f=f*j;}
  sum=sum+(1/f);
 cout<<sum;
 }
 getch();
 }

