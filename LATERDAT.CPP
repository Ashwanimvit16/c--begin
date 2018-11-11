#include<iostream.h>
#include<conio.h>
 struct date{
 int dd,yy,mm;
 };
 date d1,d2;

 void cmd(date d1,date d2)
 {
  date d3;
  if(d1.yy>d2.yy)
  d3=d1;
  else
  {
   if(d2.yy>d1.yy)
   d3=d2;
   else if(d1.mm>d2.mm)
   d3=d1;
   else if(d2.mm>d1.mm)
   d3=d2;
   else if(d1.dd>d2.dd)
   d3=d1;
   else if(d1.dd>d2.dd)
   d3=d2;
   else
   cout<<"\nBoth dates are same";
  }
  cout<<"\nLater date is:"<<d3.dd<<"-"<<d3.mm<<"-"<<d3.yy;
 }
 void main()
 {
  cout<<"\nEnter the first date:";
  cin>>d1.dd>>d1.mm>>d1.yy;
  cout<<"\nEnter the second date:";
  cin>>d2.dd>>d2.mm>>d2.yy;
  cmd(d1,d2);
  getch();
 }

