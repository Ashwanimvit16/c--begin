#include<iostream.h>
#include<conio.h>
void sqlarge(int &a, int &b)
{
 if(a>b)
 a=a*a;
 else
 b=b*b;
}
int sum(int n)
{
int sum=0;
int s;
while(n>0)
{
s=n%10;
sum=sum+s;
n=n/10;
}
return sum;
}
void main()
{
clrscr();
int x, y, z;
cout<<"\n Enter the value for three numbers:";
cin>>x>>y>>z;
sqlarge(x,y);
cout<<"\n First No.="<<x;
cout<<"\n Second Number ="<<y;

cout<<"\n THE SUM of digits of third number is:"<<sum(z);
getch();
}