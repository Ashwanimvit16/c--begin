#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int compare(char ch, char pt)
{
if(ch==pt)
return 0;
else if(ch<pt)
return -1;
else
return 1;
}
void main()
{
clrscr();
char a, b;
cout<<"\n Enter two characters:";
cin>>a>>b;
if(compare(a,b)==0)
  cout<<"\n BOTH ARE EQUAL";
  else if(compare(a,b)>0)
  cout<<"\n a>b";
  else
  cout<<"\n a<b";
  getch();
  }