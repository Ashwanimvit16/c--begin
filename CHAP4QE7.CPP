#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
class admission
{
 int adno;
 char name[],cls;
 float fees;
 public:
  void read()
  {
   cout<<"\n enter the admissino no.:";
   cin>>adno;
   cout<<"\nenter the name:";gets(name);
   cout<<"\n enter the class:";
   cin>>cls;
   cout<<"\n Enter the fees:";
   cin>>fees;
  }
  void display()
  {
   cout<<"\n The admissino no. is:"<<adno;
   cout<<"\nThe name is:"<<name;
   cout<<"\n The class is:"<<cls;
   cout<<"\n The fees is:"<<fees;
  }
 void draw();
 };
 admission adm[3];
 void admission::draw()
 {    clrscr();
  int rt,count=0;
  randomize();
   for(int i=0;i<2;i++)
  {
   rt=random(1000-10+1)+10;
   for(int i=0;i<1000;i++)
    if(rt==adm[i].adno)
   { {
     adm[i].display();
     count++;
    }
    if(count==2)
	break;
    else continue;
  }
  }  }
 void main()
 {  clrscr();
  for(int i=0;i<3;i++)
  {
   cout<<"\nEnter the details:";
   adm[i].read();
  }
  adm[1].draw();
  getch();
 }


