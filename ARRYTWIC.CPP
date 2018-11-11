//twice the avlue at odd positioins and thrice at even positiions
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int M[10];
cout<<"enter the value of array:";
for(int i=0;i<10;i++)
cin>>M[i];
for(i=0;i<10;i++)
 if(i%2==1)
 M[i]=M[i]*2;
 else
 M[i]=M[i]*3;
 for(i=0;i<10;i++)
 cout<<M[i]<<"\t";
 getch();
 }