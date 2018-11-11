//question number 14 reverse of a given number
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int s, t, n, temp;
cout<<"\n Enter the number:";
cin>>n;
temp=n;
s=0;
while(n>0)
{
t=n%10;
s=s*10+t;
n=n/10;
}
cout<<"\n The reverse of the number is:"<<s;
getch();
}