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
#include<iomanip.h>
int n=1,total=0;

//FUNCTION TO CONVERT NUMBER IN WORDS
void expand(int value)
{
const char * const ones[20] = {"Zero", "One", "Two","Three","Four","Five","Six","Seven","Eight","Nine","Eleven","Twelve","Thirteen","Fourteen","Fifteen","Sixteen","Seventeen","Eighteen","Nineteen"};
const char * const tens[10] = {"", "Ten", "Twenty","Thirty","Forty","Fifty","Sixty","Seventy","Eighty","Ninety"};

if(value<0)
    {
	cout<<"Minus ";
	expand(-value);
    }
else if(value>=1000)
    {
	expand(value/1000);
	cout<<" Thousand";
	if(value % 1000)
	{
	if(value % 1000 < 100)
	    {
		cout<< " and";
	    }
	cout<< " " ;
	expand(value % 1000);
	}
    }
else if(value >= 100)
    {
	expand(value / 100);
	cout<<" Hundred";
	if(value % 100)
	{
	cout<< " and ";
	expand (value % 100);
	}
    }
else if(value >= 20)
    {
	cout<< tens[value / 10];
	if(value % 10)
	{
	cout<< " ";
	expand(value % 10);
	}
    }
else
    {
	cout<<ones[value];
    }
return;
}


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

//ARRAY FOR MEDICINES DEPARTMENT
test med[5]={{"Paracetamol",30.00},{"Ciprolup-500",150.00},{"Metronidazole",50.00},
	       {"Elmox-250",40.00},{"Cephalexin Capsules",60.00}};


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
	cout<<"\n\tPersonal no:"<<appoint[i].pno<<"\t\tName:"<<appoint[i].name<<"\n\n\tYour final bill:  Rs.  "<<bill[i].bil;
	cout<<"  (Rs.";expand(bill[i].bil);cout<<" Only)";

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

	cout<<setw(5)<<"P.no";
	cout<<setw(25)<<"Name";
	cout<<setw(25)<<"Appointment With";
	cout<<setw(5)<<"     Number";
	cout<<endl;
prline1();
	for(int i=1;i<n;i++)
	  {
		cout<<setw(5)<<appoint[i].pno;
		cout<<setw(25)<<appoint[i].name;
		cout<<setw(25)<<appoint[i].apwith;
		cout<<setw(5)<<"     "<<i;
		cout<<endl;
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

//FUNTION 7 IS FOR MEDICINES DEPARTMENT
void medic(int sk)
  {
	char found='f';
	for(int i=1;i<n;i++)
	if(appoint[i].pno==sk)
		{
		found='t';
		break;
		}
	if(found=='f')
		cout<<"First get your appointment:";
	else
		{
		int choice;
		clrscr();
		prline();
		cout<<"\n\t\t\t       TATA MAIN HOSPITAL";
		cout<<endl;
		prline();
		cout<<endl;
		cout<<"\n\n\t\t\tWelcome to medicine store\n";
		prline1();
		cout<<endl;
		for(int j=0;j<5;j++)
		cout<<"\t\t   "<<j+1<<"."<<med[j].tname<<"--Rs."<<med[j].charges<<endl;
		prline1();
		cout<<"\nEnter your choice:";
		cin>>choice;
switch(choice)
	{
		case 1:
			bill[i].bil=bill[i].bil+50;
			cout<<"\nYour entry is important to us";
			break;
		case 2:
			bill[i].bil=bill[i].bil+150;
			cout<<"\nYour entry is important to us";
			break;
		case 3:
			bill[i].bil=bill[i].bil+50;
			cout<<"\nYour entry is important to us";
			break;
		case 4:
			bill[i].bil=bill[i].bil+40;
			cout<<"\nYour entry is important to us";
			break;
		case 5:
			bill[i].bil=bill[i].bil+60;
			cout<<"\nYour entry is important to us";
			break;
		default:
			cout<<"\nInvalid choice";
			getch();
      }
} getch();
}

//Function 8 (Function to Delete any appointment)
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
	   {
	cout<<"\nRecheck your entry.....";
	getch();
	   }
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
	cout<<"\n\t\t\t 3. Medicine Department";
	cout<<"\n\t\t\t 4. Display Appointments ";
	cout<<"\n\t\t\t 5. Cancel Appointments";
	cout<<"\n\t\t\t 6. Final Bill";
	cout<<"\n\t\t\t 7. Exit";
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
		cout<<"Enter your personal no:";
		cin>>sk;
		medic(sk);
		break;
	case 4:
			display();
			break;

	case 5:      cout<<"\nEnter your personal no:";
			cin>>sk;
			cancel(sk);
			//cancel function
			break;

	case 6:    cout<<"\nEnter your personal no:";
			cin>>sk;
			final(sk); //final bill function
			break;

	case 7:
			cout<<"\n THANKS FOR USING ....";
			cout<<"\n USE IT AGAIN .. .";
			getch();
			exit(1);

	default:
			cout<<"\n\t\t\t SORRY INVALID CHOICE";
			getch();
	    }
	}while(choice!=7);
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
