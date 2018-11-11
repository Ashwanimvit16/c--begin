#include<conio.h>
#include<iostream.h>
void main()
{clrscr();
int arr[4][4],sum=0,r=4,c=4;
cout<<"enter the value for array:";
for(int i=0;i<4;i++)
for(int j=0;j<4;j++)
cin>>arr[i][j];
for(i=0;i<4;i++)
{cout<<endl;
for(j=0;j<4;j++)
cout<<arr[i][j]<<"\t";}

for(i=0;i<4;i++)
for(j=0;j<4;j++)
{
if(i==j ||(i+j)==3)
sum=sum+arr[i][j];
}

cout<<"the sum is:"<<sum;
getch();
}





