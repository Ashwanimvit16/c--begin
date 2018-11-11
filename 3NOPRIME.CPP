#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int a,b,c,big,lcm=1;
 cout<<"enter the 3 no.";
 cin>>a>>b>>c;
 if(a>b)
 {
  if(a>c)
  big=a;
  else
  big=c;
 }
 else
 {
  if(b>c)
  big=b;
  else
  big=c;
 }
 for(int i=2;i<=big;i++)
 {
  if(a%i==0||b%i==0||c%i==0)
  {
   if(a%i==0)
   a=a/i;
   if(b%i==0)
   b=b/i;
   if(c%i==0)
   c=c/i;
   lcm=lcm*i;
   i--;
  }
  else if(a==1&&b==1&&c==1)
  break;
 }

 cout<<"Lcm of given no is:"<<lcm;
 getch();
}
