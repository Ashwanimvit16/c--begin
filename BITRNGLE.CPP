#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int r,c,n,num=1;
cout<<"enter the value of n:";
cin>>n;
for(r=1;r<=n;r++)
{
cout<<"\n\n";
for(c=1;c<=r;c++)
if(r%2==0 && c%2==0)
cout<<"1\t";
else if(r%2==1 && c%2==1)
cout<<"1\t";
else
cout<<"0\t";
}
getch();
}