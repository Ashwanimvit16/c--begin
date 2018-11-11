//question number 8 (check whether the given number is palidrone or not
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n, t, s;
cout<<"\n Enter any number:";
cin>>n;
int temp=n;
s=0;
while(n>0)
{
t=n%10;
s=s*10+t;
n=n/10;
}
cout<<"\t Reverse of the given number is:"<<s;
if(temp==s)
cout<<"\n Number is palidrone";
else
cout<<"\n Number is not palidrone";
getch();
}
