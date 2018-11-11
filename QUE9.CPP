//question number 9 (armstrong or not)
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n, t, s, r;
cout<<"\n Enter a Number:";
cin>>n;
int temp=n;
s=0;
while(n>0)
{
t=n%10;
s=s+t*t*t;
n=n/10;
}
if(temp==s)
cout<<"\n Number is Armstrong";
else
cout<<"\n Number is not Armstrong";
getch();
}