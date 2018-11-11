//reshuffling array
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int n,M[10],temp;
cout<<"enter the value for array";
for(int i=0;i<10;i++)
cin>>M[i];
M[10]=n;
for(i=0;i<=(n/2);i++)
temp=M[i];
M[i]=M[n/2+i];
M[n/2+i]=M[i];
for(i=0;i<=(n/2);i++)
cout<<M[i]<<"\t";
getch();
}

