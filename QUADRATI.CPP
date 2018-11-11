//quadratic equation
#include<iostream.h>
#include<conio.h>
#include<math.h>
int quad(int a,int b,int c,int &r1,int &r2)
{
 int d;
 d=b*b-4*a*c;
 if(d==0)
  {
  r1=(-b+sqrt(d))/(2*a);
 r2=(-b-sqrt(d))/(2*a);
 }
 else if(d>0)
{ r2=(-b-sqrt(d))/(2*a);
  r1=(-b+sqrt(d))/(2*a);
  }
  else if(d<0)
  cout<<"no answer";
   }
  void main()
  {
   clrscr();
   int a,b,c,d,r1,r2;
   cout<<"enter the values:";
   cin>>a>>b>>c;
   quad(a,b,c,r1,r2);
   cout<<r1<<"\t"<<r2;
   getch();
   }
