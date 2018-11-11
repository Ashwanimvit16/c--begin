//question number 5
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n, m;
cout<<"\n Enter the Lower Limit:";
cin>>n;
cout<<"\n Enter the Upper Limit:";
cin>>m;
if(n%2==0)
n=n+1;
for(int i=n;i<=m;i+=2)
{
cout<<"\t"<<i;
}
}
