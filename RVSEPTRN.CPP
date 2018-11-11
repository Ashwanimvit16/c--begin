//to display pattern
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int i,j,k,n;
cout<<"enter the no:";
cin>>n;
for(i=1;i<=n;i++)
{

{

cout<<"\n";
for(j=n;j>i;j--) {
       cout<<" ";}
for(k=1;k<=i;k++)  {
       cout<<"*";
}
}
}
getch();
}

