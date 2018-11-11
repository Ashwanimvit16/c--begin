//question number 6
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,m,sum;
cout<<"\n Enter the lower limit:";
cin>>n;
cout<<"\n Enter the upper Limit:";
cin>>m;
sum=0;
if(n%2==1)
n=n+1;
for(int i=n;i<=m;i+=2)
{
sum=sum+i;
}
cout<<"\n Sum is:"<<sum;
getch();
}