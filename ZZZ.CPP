
#include<iostream.h>
#include<conio.h>
void main()
{        clrscr();
 int a[10][10],m,n;
 cout<<"enter the no of rows:";
 cin>>n;
 cout<<"enter the no of columns:";
 cin>>m;
  int k=m;
 cout<<"enter the values for array:";
 for(int i=0;i<n;i++)
 for(int j=0;j<m;j++)
 cin>>a[i][j];
 cout<<"the matrix form is:";
 for(i=0;i<n;i++)
 {
 cout<<endl;
 for(j=0;j<m;j++)
 cout<<a[i][j]<<"\t";
 } //matrix form
 if(k%2==1)
{ for(i=0;i<n;i++)
 for(j=0;j<m;j++)
  if((i+j)%2==0)
  cout<<endl<<a[i][j]<<"\t";
 }
 else
 {
 for(i=0;i<n;i++)
 { cout<<endl;
 for(j=0;j<m;j++)
 if(j%2==0)
 cout<<a[i][j]<<"\t";
 }}

 getch();
 }