//program to find the reverse of a given number
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n, t;
cout<<"\n Enter a number:";
cin>>n;
int temp=n;
cout<<"\n THE REVERSE OF THE GIVEN NUMBER IS:";
int s=0;
while(n>0)
{
t=n%10;
s=s*10+t;
n=n/10;
}
cout<<s;
getch();
}