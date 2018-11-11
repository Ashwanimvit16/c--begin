/*

	PROJECT NAME:  HOSPITAL MANAGEMENT SYSTEM
	--------------------------------------------

	MEMBERS NAME:
	--------------------------------------------
			1. Master Ankit Kumar
			2. Master Ashwani Kumar
			3. Master Sachin Kumar Singh
	--------------------------------------------
	ABSTRACT:
		  Our Software keeps the records of the appointments taken
		  with the doctors and also mentions his/her appointment
		  number and doctors name. It also maintains the billing
		  part i.e. it also calculates the total amount to be paid
		  by a patient who has taken appointments and for pathological
		  tests.
		  THANNK YOU!
*/

//HOSPITAL/CLINIC MANAGEMENT SYSTEM SOFTWARE
#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
#include<process.h>
int n=1,total=0;

//Structure for Hospital System
struct account
{
  int bil;
  int pno;
  char name[30], apwith[30];
};

//Structure for tests
struct test
{
   char tname[25];
   float charges;
};

//ARRAY FOR PATHOLOGICAL TESTS
test tests[5]={{"Blood Test",150.00},{"Urine Test",125.00},
{"Thyroid Test",450.00},{"X-Ray",250.00},{"Sugar Test",100.00}};

//UDDT FOR RECORDS OF APPOINTMENT AND BILL
account appoint[100],bill[100];

//Function 1 (To print Astericks Line)
void prline()
  {
     for(int i=0;i<20;i++)
	cout<<" ";
     for(i=0;i<40;i++)
	cout<<"*";
  }

//Function 2 (To Print simple dotted line)
void prline1()
  {
     for(int i=0;i<80;i++)
     cout<<"-";
  }

//Function 3 (To Calculate the Final Bill)
void final(int sk)
  {
    char found='f';
    for(int i=1;i<n;i++)
    if(appoint[i].pno==sk)
       {
	 found='t';
	 break;
       }

    if(found=='f')
       cout<<"\nRcheck your value" ;
    else
       {
	 cout<<"\nPersonal no:"<<appoint[i].pno<<"\t\tName:"<<appoint[i].name<<"\t\tYour final bill:Rs-"<<bill[i].bil;
       }getch();
  }

//Function 4 (To Get the values for the Appointments)
void getval()
 {
   cout<<"\n Enter the personal number:";
     cin>>appoint[n].pno;
   cout<<"\n Enter your Name:";
     gets(appoint[n].name);
   n++;
}

//Function 5 (To Display The Records of the Appointments)
void display()
  {
    clrscr();
	prline();
	cout<<"\n\t\t\t       TATA MAIN HOSPITAL";
	cout<<endl;
	prline();
	cout<<endl;
    cout<<"\n\t\t\tTODAY'S APPOINTMENT ARE AS LISTED";
    cout<<endl<<endl;
    prline1();
    cout<<"P.No:";
    cout<<"\t    Name:";
    cout<<"\t    Appointment With";
    cout<<"\t Appointment Number:"<<endl;
    prline1();
      for(int i=1;i<n;i++)
	 {
	   cout<<"\n"<<appoint[i].pno<<".";
	   cout<<"\t"<<appoint[i].name;
	   cout<<"\t    "<<appoint[i].apwith;
	   cout<<"\t\t"<<i<<endl;
	 }
    prline1();
    cout<<"\n Press any key to return to our main menu...";
    getch();
  }

//Function 6 (For the Pathological Tests)
void patho(int ak)
  {
    int choice;
    char found='f';

      for(int i=0;i<n;i++)
	  if(appoint[i].pno==ak)
		{
		  found='t';
		  break;
		}

  if (found=='f')
      cout<<"\n Recheck your entry:";
  else
       {
	 for(int j=0;j<5;j++)
	 cout<<j+1<<"\t"<<tests[j].tname<<"--Rs."<<tests[j].charges<<endl;
	 cout<<"\nEnter your choice:";
	 cin>>choice;

     switch(choice)
     {
      case 1:
		 bill[i].bil=bill[i].bil+150;
		 cout<<"\n Your entry is important to us";
		 break;
      case 2:
		bill[i].bil=bill[i].bil+125;
		cout<<"\n Your entry is important to us";
		break;
      case 3:
		bill[i].bil=bill[i].bil+450;
		cout<<"\n Your entry is important to us";
		break;
      case 4:
		bill[i].bil=bill[i].bil+250;
		cout<<"\n Your entry is important to us";
		break;
      case 5:
		bill[i].bil=bill[i].bil+100;
		cout<<"\n Your entry is important to us";
		break;
      default:
		cout<<"\n Invalid choice";
		getch();
      }
    } getch();
  }

//Function 7 (Function to Delete any appointment)
void cancel(int sk)
  {
	char found='f';
	for(int i=1;i<n;i++)
	    if(appoint[i].pno==sk)
		{
		  found='t';
		  break;
		}

	if(found=='f')
	   cout<<"\nRecheck your entry.....";
	else
	   {
	   for(int j=i;j<n;j++)
		appoint[j]=appoint[j+1];
		n--;
	   }
  }

//MAIN MENU OF OUR HOSPITAL MANAGEMENT PROJECT
void hosp()
  {
   int choice;
   do
     {
	clrscr();
	prline();
	cout<<"\n\t\t\t       TATA MAIN HOSPITAL";
	cout<<endl;
	prline();
	cout<<endl;
	cout<<"\n\t\t\t 1. Appointments";
	cout<<"\n\t\t\t 2. Pathological Tests";
	cout<<"\n\t\t\t 3. Display Appointments ";
	cout<<"\n\t\t\t 4. Cancel Appointments";
	cout<<"\n\t\t\t 5. Final Bill";
	cout<<"\n\t\t\t 6. Exit";
	cout<<endl;
	prline();
	cout<<endl<<endl;
	  cout<<"\n\t\t     Enter your choice:";
	  cin>>choice;

	switch(choice)
	   {
	    case 1:     int sk;
			getval();
			cout<<"\n\t\t FOLLOWING DOCTORS ARE ON DUTY";
			cout<<"\n\t\t 1. Dr. Sahu";
			cout<<"\n\t\t 2. Dr. Mukherjee";
			cout<<"\n\t\t 3. Dr. Pati";
			cout<<"\n\t\t 4. Dr. Dinesh";

			cout<<"\n\t Enter your choice:";
			cin>>sk;

			cout<<"\n Your Appointment Number is:  "<<n-1;
			getch();

			switch(sk)
			   {
				case 1:
				       strcpy(appoint[n-1].apwith, "Dr. Sahu");
				       bill[n-1].bil=500+total;

				       break;

				case 2:
					strcpy(appoint[n-1].apwith, "Dr. Mukherjee");
					bill[n-1].bil=500+total;
					break;
				case 3:
					strcpy(appoint[n-1].apwith, "Dr. Pati");
					bill[n-1].bil=500+total;
					break;
				case 4:
					strcpy(appoint[n-1].apwith, "Dr. Dinesh");
					bill[n-1].bil=500+total;
					break;
				default:
					cout<<"\n Invalid Choice";
				}
			break;

	    case 2:
			cout<<"\n\nEnter your personal no:";
			cin>>sk;
			patho(sk);
			// Pathological tests
			break;
	    case 3:
			display();
			break;

	    case 4:      cout<<"\nEnter your personal no:";
			 cin>>sk;
			 cancel(sk);
			//cancel function
			break;

	    case 5:    cout<<"\nEnter your personal no:";
			  cin>>sk;
			    final(sk); //final bill function
			break;

	    case 6:
			cout<<"\n THANKS FOR USING ....";
			cout<<"\n USE IT AGAIN .. .";
			getch();
			exit(1);

	    default:
			cout<<"\n\t\t\t SORRY INVALID CHOICE";
			getch();
	    }
	    }while(choice!=6);
	    }

//MAIN BODY OF THE PROGRAM
void main()
{
clrscr();
hosp();
}

/*
    THANKS FOR USING                      HOPE YOU
			OUR OWN PROJECT               LIKED IT
*/