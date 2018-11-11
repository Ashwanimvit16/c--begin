//to check the no. is prime or not
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n;
char prime='t';
cout<<"enter any no.:";
cin>>n;
prime='t';
for(int i=2;i<n;i++)
 if(n%i==0)
 prime='f';
 if(prime=='t')
 cout<<"\n no. is prime";
 else
 cout<<"\n no. is not  prime";
 getch();
 }