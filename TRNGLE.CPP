//pattern
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,i,k;
cout<<"enter the value of n:";
cin>>n;
for(i=1;i<=n;i++)
{
cout<<"\n";
for(int j=n;j>i;j--)
 {
 cout<<" ";
 }
for(k=1;k<=2*i-1;k++)
{
cout<<"*";
}

}
 getch();
}

