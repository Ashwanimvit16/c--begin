// fibonacci series
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,fibo=0,f=0,s=1;
cout<<"enter the value of n;";
cin>>n;
cout<<f<<"\t"<<s<<"\t";
do
 {
 fibo=f+s;
 if(fibo<=n)
 cout<<fibo<<"\t";
 f=s;
 s=fibo;
 }
 while(fibo<=n);
 getch();
 }