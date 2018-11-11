//bubble sort
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long int M[10];
int j,n,temp;
cout<<"enter the no of elements to be sorted:";
cin>>n;
cout<<"enter the value of array:";
for(int i=0;i<n;i++)
cin>>M[i];
 for(j=0;j<n-1;j++)
for(i=0;i<n-1-j;i++)
{
 if(M[i]>M[i+1])
 {
 temp=M[i];
 M[i]=M[i+1];
 M[i+1]=temp;
 }
 }
 cout<<"elements are:";
 for(i=0;i<n;i++)
 cout<<M[i]<<"\t";
 getch();
 }

