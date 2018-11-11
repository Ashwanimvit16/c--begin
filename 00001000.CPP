#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int arr[5][5];
 for(int i=0;i<5;i++)
 {
 cout<<"\n\t";
 int f=1;
 for(int j=0;j<5;j++)
 if((i+j)>=4)
{ cout<<f<<"\t";
 f++;}
 else
 cout<<"0\t";
 }
 getch();
 }
