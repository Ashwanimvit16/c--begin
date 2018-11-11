//sum of primes no.s in an array
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int M[10],n,a,sum=0;
cout<<"enter the no of elements:";
cin>>n;
cout<<"enter the value for array:";
for(int i=0;i<n;i++)
cin>>M[i];
int c=0;
for(int j=2;i<n;i++)
{
if(n%i==0)
c=1;
if(c==0)
sum=sum+M[i];
}
cout<<"The sum of prime no is:"<<sum;
getch();
}

