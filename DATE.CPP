#include<iostream.h>
#include<conio.h>

struct t{
 int h,m,s;
 };
 t t1={7,25,35},t2,t3;

 void main()
 {       clrscr();
  cout<<"enter the time:";
  cin>>t2.h>>t2.m>>t2.s;

  if((t1.s+t2.s)>=60)
  {
  t3.s=(t1.s+t2.s)-60;
   if((t1.m+t2.m)>=60)
   { t3.m=(t1.m+t2.m+1)-60;
     t3.h=(t1.h+t2.h+1);
   }
   else
   {  t3.m=(t1.m+t2.m+1);
     t3.h=(t1.h+t2.h);
   }}
   else
  { if((t1.m+t2.m)>=60)
   { t3.m=(t1.m+t2.m)-60;
     t3.h=(t1.h+t2.h+1);
   }
   else
   {  t3.m=(t1.m+t2.m+1);
     t3.h=(t1.h+t2.h);
   }
   }
   cout<<"\nThe new time is:";
   cout<<t3.h<<"::"<<t3.m<<"::"<<t3.s;
   getch();
  }