//pattern factorial
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
float n;
cout<<"\n Enter the number of terms:";
cin>>n;
float sum=0;
float F=1;
for(float i=1;i<=n;i++)
{
float m=i*2-1;
for(float j=m;j>0;j--)
F=F*j;
sum=sum+1/F;
}
cout<<"\ THE SUM IS:"<<sum;
getch();
}