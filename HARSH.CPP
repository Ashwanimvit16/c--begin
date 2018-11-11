//courier services
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
#include<process.h>
#include<stdio.h>
#include<iomanip.h>
int n=0, m=0, ak=1;

struct courier
{
float bill, weigh;
char name[20], des[20];
};

courier cr[30], mp[20];


void addcr()
{
 int sk, choice;
 cout<<"\n Enter the Weight of the courier:";
 cin>>sk;
 cout<<"\n You will be charged Rs. 0.75 per 20 gram per Km";
 cr[n].weigh=sk;
 cout<<"\n Enter Your Name:";
 gets(cr[n].name);
     strcpy(mp[m].name, cr[n].name);
 cout<<"\n Choose your destination:";
     cout<<"\n\t\t 1. Mumbai (1700 Km)  \t\t 5. Kolkata (350 KM)";
     cout<<"\n\t\t 2. Delhi (1100 Km)   \t\t 6. Bokaro  (150 Km)";
     cout<<"\n\t\t 3. Dehradun (1000 Km) \t\t 7. Chennai (1700 Km)";
     cout<<"\n\t\t 4. jammu (2000 Km) \t\t 8. Nashik (1200 Km)";
 cout<<"\n\n Enter your choice:";
 cin>>choice;
     switch(choice)
     {
	  case 1:       strcpy(mp[m].des, "Mumbai");
			mp[m].bill=ak*(0.75/20)*1700;
			cout<<"\n Your Bill is of:"<<mp[m].bill;
			m++;
			getch();
			break;
	  case 2:	strcpy(mp[m].des, "Delhi");
			mp[m].bill=ak*(0.75/20)*1100;
			cout<<"\n Your Bill is of:"<<mp[m].bill;
			m++;
			getch();
			break;
			//bill for case 2
	  case 3:       strcpy(mp[m].des, "Dehradun");
			mp[m].bill=ak*(0.75/20)*1000;
			cout<<"\n Your Bill is of:"<<mp[m].bill;
			m++;
			getch();
			break;
			//bill for case 3
	  case 4:       strcpy(mp[m].des, "Jammu");
			mp[m].bill=ak*(0.75/20)*2000;
			cout<<"\n Your Bill is of:"<<mp[m].bill;
			m++;
			getch();
			break;
			//bill for case 4
	  case 5:       strcpy(mp[m].des, "Kolkata");
			mp[m].bill=ak*(0.75/20)*350;
			cout<<"\n Your Bill is of:"<<mp[m].bill;
			m++;
			getch();
			break;
			//bill for case 5
	  case 6:       strcpy(mp[m].des, "Bokaro");
			mp[m].bill=ak*(0.75/20)*150;
			cout<<"\n Your Bill is of:"<<mp[m].bill;
			m++;
			getch();
			break;
			// bill for case 6
	  case 7:       strcpy(mp[m].des, "Chennai");
			mp[n].bill=ak*(0.75/20)*1700;
			cout<<"\n Your Bill is of:"<<mp[m].bill;
			m++;
			getch();
			break;
			//.bill
	  case 8:       strcpy(mp[m].des, "Nashik");
			mp[m].bill=ak*(0.75/20)*1200;
			cout<<"\n Your Bill is of:"<<mp[m].bill;
			m++;
			getch();
			break;
			//bill
	  default:
			cout<<"\n INVALID CHOICE";
			getch();
			}

	  }

 void disrec()
 {
  cout<<setw(5)<<"S.No";
  cout<<setw(25)<<"Name";
  cout<<setw(25)<<"Destination";
  cout<<"\t\t"<<setw(5)<<"Bill";
  cout<<endl;
     for(int i=0;i<m;i++)
      {
	cout<<setw(5)<<i+1;
	cout<<setw(25)<<mp[i].name;
	cout<<setw(25)<<mp[i].des;
	cout<<"\t\t"<<setw(5)<<mp[i].bill;
	cout<<endl;
      }
  }

  void cancel(int sk)
  {
	char found='f';
	for(int i=0;i<m;i++)
	    if(i==sk)
		{
		  found='t';
		  break;
		}

	if(found=='f')
	   cout<<"\nRecheck your entry.....";
	else
	   {
	   for(int j=i;j<m;j++)
		mp[j]=mp[j+1];
		m--;
	   }
  }



void menu()
{
int choice;
do
{
clrscr();
cout<<"\n\t\t\t HARSH COURIER AND MOVERS AND PACKERS";
cout<<"\n\t\t 1. Courier Services";
cout<<"\n\t\t 2. Customer Records";
cout<<"\n\t\t 3. Cancellation";
cout<<"\n\t\t 4. Exit";

  cout<<"\n\n\t Enter your choice:";
  cin>>choice;

  switch(choice)
      {
	 case 1: addcr();
		 // Add Function with Billing
		 break;
	 case 2:
		 disrec();
		 getch();
		 break;
	 case 3:    int sk;
		   cout<<"\nEnter the serial no.";
		   cin>>sk;
		    cancel(sk);		 //Cancellation
		 break;
	 case 4:
		 //Bill Function
		 break;
	 case 5:
		 cout<<"\n THANKS FOR USING OUR SOFTWARE .. . ";
		 cout<<"\n VISIT US AGAIN... ";
		 getch();
		 exit(1);
	 default:
		 cout<<"\n INVALID CHOICE";
		 getch();
		 break;
	 }
	 }while(choice!=4);
}


void main()
{
clrscr();
menu();
}