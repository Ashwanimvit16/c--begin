#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a,b,c,h;
cout<<"enter the first no:";
cin>>a;
cout<<"enter the second no:";
cin>>b;
while(c!=0)
{ c=a%b;
 if(c==0)
 h=b;
 else
 {
 a=b;
 b=c;
 }
 }
 cout<<"hcf is:"<<h;
 getch();
 }