//program to multiply 2 matrices
#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a[10][10],b[10][10],c[10][10],m,n,sum=0;
cout<<"enter the no of rows:";
 cin>>n;
 cout<<"enter the no of columns:";
 cin>>m;
 cout<<"enter the values for array:A";
 for(int i=0;i<n;i++)
 for(int j=0;j<m;j++)
 cin>>a[i][j];
 cout<<"enter the values for array:B";
 for(i=0;i<n;i++)
 for(j=0;j<m;j++)
 cin>>b[i][j];
 cout<<"the value of matrix A:";
 for(i=0;i<n;i++)
 {cout<<endl;
 for(j=0;j<	m;j++)
 cout<<a[i][j]<<"\t";
 }
 cout<<"\nthe value of matrix B:";
 for(i=0;i<n;i++)
 {cout<<endl;
 for(j=0;j<m;j++)
 cout<<b[i][j]<<"\t";
  }
  cout<<"\nthe required matrix C is:";
for(i=0;i<n;i++)
{cout<<"\n";
 for(j=0;j<m;j++)
 {
 c[i][j]=0;
 for(int k=0;k<m;k++)
 c[i][j]=c[i][j]+a[i][k]*b[k][j];
 cout<<c[i][j]<<"\t";
 }
 }
 getch();
 }