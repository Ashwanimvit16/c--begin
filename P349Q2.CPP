#include<iostream.h>
#include<conio.h>
int satis(int a, int b, int c, int d)
{
if (a*a*a+b*b*b+c*c*c==d*d*d)
 return 0;
 else
 return -1;
 }
void main()
{
clrscr();
int x, y, z, e;
cout<<"\n Enter any four numbers:";
cin>>x>>y>>z>>e;

if(satis(x,y,z,e)==0)
cout<<"satisifies";
else
cout<<"\doesnot satisfy";
getch();
}