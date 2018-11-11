#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
 int m,n;
 int a[100],b[100],c[100];
 cout<<"enter the no. of terms to be displayed for a:";
 cin>>m;
 cout<<"enter the no. of terms to be displayed for b:";
 cin>>n;
 clrscr();
 cout<<"enter the elements for a";
 for(int i=0;i<m;i++)
 cin>>a[i];
 for(i=0;i<n;i++)
 cin>>b[i];
 clrscr();
 for(i=0;i<=(m+n);i++)
 {
 cout<<a[i]<<"\t";
 cout<<"\n"<<b[i]<<"\t";
  }
  getch();
  }



