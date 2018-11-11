#include<iostream.h>
#include<conio.h>
int fact(int n)
{
if(n==1)
 return 1;
 else
 return n*fact(n-1);
 }
 void main()
 {
  clrscr();
  int n;
  cout<<"enter any integer;";
  cin>>n;
  cout<<"the factorial of:"<<n<<"is"<<fact(n);
  getch();
  }