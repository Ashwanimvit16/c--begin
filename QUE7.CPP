//question number 6
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n, m;
cout<<"\n Enter the First Value:";
cin>>n;
cout<<"\n Enter the Second Value:";
cin>>m;
if(n%2==1)
n=n+1;
int sum=0;
for(int i=n;i<=m;i+=2)
{
cout<<endl;
cout<<i;
sum=sum+i;
}
cout<<"\n the sum of the numbers is:"<<sum;
getch();
}