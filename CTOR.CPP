#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

 class bus
  {
    int busno;
    char from[190],to[100],type;
    float dis,fare;
    float calfare(int di,char tp)
    {
     int amt;
     if(tp=='o')
      amt=di*15;
     else if(tp=='e')
      amt=di*20;
	   else if(tp=='l')
	    amt=24*di;
		else
		cout<<"\n Please enter a valid value";
      return amt;
     }

     public:
	   bus()
	   {
	    type='o';
	    dis=500;
	   }

	   bus(int r, char st)
	   {
	    type=st;
	    dis=r;
	   }

	   void allocate()
	   {
	    cout<<"\nEnter the bus no:";
	    cin>>busno;
	    cout<<"\nEnter the initial destination:" ;
	    gets(from);
	    cout<<"\nEnter the final destination:";
	    gets(to);
	    cout<<"\nEnter the type of bus service:";
	    cin>>type;
	    cout<<"\n Enter the total distance:";
	    cin>>dis;
	    fare=calfare(dis,type);
	   }

	   void display()
	   {
	    cout<<"\n Your bus no is:"<<busno;
	    cout<<"\n Your Destination is From:"<<from<<"\t To:"<<to;
	    cout<<"\n Your service type is:"<<type;
	    cout<<"\n Your total distance travelled is:"<<dis;
	    cout<<"\n Your total fare is:"<<fare;
	   }
	   };


 void menu(bus trip)
{
int choice;

do{
clrscr();
 cout<<"\n\n\t\t CHAT BUS INCORPORATION";
 cout<<"\n\t\t 1.ADD info";
 cout<<"\n\t\t 2.DISPLAY info";
  cout<<"\n\t\t 3.Exit";
  cout<<"\nenter your choice:";
  cin>>choice;
  switch(choice)
  {
   case 1:
  trip.allocate();
  break;
   case 2:
  trip.display();
  break;

  case 3:
  {
  cout<<"\t\t\t\tThanks for visiting";
  cout<<"\t\t\t\tUse it again.....";
  exit(1);
  }
  break;
  default:
  cout<<"\t\t\t\tInvalid choice...";
     }
     getch();
  }while(choice!=0);
      getch();
  }
  void main()
  {
   bus trip1,trip2(600,'l');
   menu(trip1);
   menu(trip2);
   getch();
  }
