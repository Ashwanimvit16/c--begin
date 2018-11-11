
//question 22
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int ar[10], n;
cout<<"\n Enter the value for the array:";
for(int i=0;i<10;i++)
cin>>ar[i];
int sum=0;
for(i=0;i<10;i++)
{
char prime='t';
n=ar[i];
for(int j=2;j<n;j++)
	if (n%j==0)
	{prime='f';
	break;
	}
	if(prime=='t')
	sum=sum+n;
	}
	cout<<"\n The Sum is:"<<sum;
	getch();
}