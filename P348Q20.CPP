#include<iostream.h>
#include<conio.h>
int isprime(int n)
{
char prime='t';
for(int i=2;i<n;i++)
{
if(n%i==0)
 {
 prime='f';
 break;
 }
 }
if(prime=='t')
return 0;
else
return -1;
}
void main()
{
clrscr();
int x;
cout<<"\n Enter a number:";
cin>>x;
 if(isprime(x)==0)
 cout<<"\n PRIME";
 else
 cout<<"\n NOT PRIME";
getch();
}