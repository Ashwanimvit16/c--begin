//binary search
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
long int M[10],n,i,lb,mid,sk,ub;
char found='f';
cout<<"enter the no of elements:";
cin>>n;
cout<<"\nenter value in sorted order:";
for(i=0;i<n;i++)
cin>>M[i];
cout<<"enter element you want to search;";
cin>>sk;
lb=0;
ub=n-1;
while(lb<=ub)
{
 mid=(lb+ub)/2;
 if(sk>M[mid])
 lb=mid+1;
  else if(sk<M[mid])
  ub=mid-1;
  else if(sk==M[mid])
  {
   found='t';
   break;
   }
   }
   if(found=='t')
   cout<<"data found at:"<<mid+1;
   else
   cout<<"element not in the list";
   getch();
   }

