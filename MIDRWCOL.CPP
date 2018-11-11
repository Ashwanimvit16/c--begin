#include<iostream.h>
#include<conio.h>
void main()
{        clrscr();
 int a[10][10],n,k,sum;
 cout<<"enter the no of rows and columns:";
 cin>>n;
 cout<<"enter the values for array:";
 for(int i=0;i<n;i++)
 for(int j=0;j<n;j++)
 cin>>a[i][j];
 cout<<"the Matrix forn is:";
 for(i=0;i<n;i++)
 {
 cout<<endl;
 for(j=0;j<n;j++)
 cout<<a[i][j]<<"\t"; }
 k=n%2;
 cout<<"\nsum middle row elements are: ";
{
sum=0;
 for(i=0;i<n;i++)
 sum+=a[k][i];
 cout<<sum<<"\t";
		    }
cout<<"\nsum middle coluns elements are:";
{
sum=0;
 for(i=0;i<n;i++)
 sum+=a[i][k];
 cout<<sum<<"\t";
     }
 getch();
 }
