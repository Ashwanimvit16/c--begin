//program to double the value of a matrix
#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
void main()
{
clrscr();
int a[4][4], n;

cout<<"\n Enter the value for the Matrix:";
for(int i=0; i<4; i++)
for(int j=0; j<4;j++)
cin>>a[i][j];

cout<<"\n Value after doubling:";
for(i=0;i<4;i++)
{
cout<<endl;
for(j=0;j<4;j++)
cout<<"\t"<<2*a[i][j];
}
getch();
}