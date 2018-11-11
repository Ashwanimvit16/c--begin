#include<iomanip.h>
#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<graphics.h>
////////////////// calling all function /////////////////////////////////////
void product();
void getItem ();
void search(int sk);
void modify(int sk);
void delItem(int b);
void buy();
void password();
void show();
void bill();
void Fridge();
void LCD();
void Washmac();
void cooler();
void fan();
void microven();
void ACs();
void iron();
void mobile();
void mixer();
void computer();
void menu();
void heater();
/////////////////////////////////////////////////////////////////////////////
////////////////////////creating item structure..////////////////////////////
/////////////////////////////////////////////////////////////////////////////
struct item
{
  char name[30],pname[50];
  int qty,code,discount;
  long price;
};
char ch;
int choice;
int i;
item I[10];
long double n=0,r1=50000,r2=20000,r3=10000,r4=8000,r5=7000,r6=2000,r7=38999,r8=3500,r9=1400,r10=8700,r11=42000,r12=1400;
//creating swap function..
void swap(int &a, int &b)
{
 a=a+b;
 b=a-b;
 a=a-b;
}
//creating function for getting item information..
void getItem ()
{
  cout<<"  FILL UP THE MENTIONED DETAILS TO PROCESS THE BILL AS PRINTED ABOVE ";
  cout<<"\n\n         ";
  cout<<"\n\n\t\t ENTER ITEM CODE:";
  cin>>I[n].code;
  cout<<"\t\t     ENTER YOUR NAME:";
  gets(I[n].name);
  cout<<"\t\t     ENTER ITEM QUANTITY :";
  cin>>I[n].qty;
  cout<<"\t\t     ENTER PRODUCT NAME:";
  gets(I[n].pname);
  n++;
}

//function for searching an item from record.

void search(int sk)
{
 char found='f';
 for(int i=0;i<n;i++)
 if(I[i].code==sk)
  {
   found='t';
   break;
  }

   if(found=='t')
    {
     clrscr();
     cout<<"\n\n\t\t\t\tITEM FOUND";
     cout<<"\n\t\t\tPress ENTER to display the item...";
     getch();
     clrscr();
     cout<<"\n\n\n\t\t\t\t<-SEARCHED ITEM->";
     cout<<"\n\n\t\tITEM CODE:"<<I[i].code;
     cout<<"\n\t\tCUSTOMER NAME:"<<I[i].name;
     cout<<"\t\tITEM QUANTITY:"<<I[i].qty;
     cout<<"\n\t\tITEM PRICE:"<<I[i].price;
     cout<<"\n\t\tPRODUCT NAME:"<<I[i].pname;
     cout<<"\n\n\tPress ENTER to return MAIN MENU..";
     getch();
     clrscr();
    }
   else
    {
     clrscr();
     cout<<"\n\n\t\t\tITEM NOT FOUND.";
     cout<<"\n\t\tPress ENTER to return MAIN MENU..";
     getch();
     clrscr();
    }
}

//function for modfying an item from record...

void modify(int sk)
{
 char found='f';
 for(int i=0;i<n;i++)
  if(I[i].code==sk)
    {
    found='t';
    break;
    }
    if(found=='t')
     {
      clrscr();
      cout<<"\n\n\t\t\t\tITEM FOUND";
      cout<<"\n\t\t\tPress ENTER to modify the item...";
      getch();
      clrscr();
      cout<<"\n\n\n\t\t\t<-MODIFICATION OF ITEM->";
      cout<<"\n\t\tITEM CODE:"<<I[i].code;
      cout<<"\n\n\t\tENTER YOUR NAME:";gets(I[i].name);
      cout<<"\n\t\tENTER ITEM QUANTITY :";cin>>I[i].qty;
      cout<<"\n\n\tITEM MODIFIED";
      cout<<"\n\tPress ENTER to return MAIN MENU..";
      getch();
      clrscr();
     }
   else
    {
      clrscr();
      cout<<"\n\n\t\tf\tITEM NOT FOUND.";
      cout<<"\n\t\tPress ENTER to return MAIN MENU..";
      getch();
      clrscr();
    }
}


void delItem(int b)                     //function for deleting item
{
 char found='f';
  for(int i=0;i<n;i++)
     if(b==I[i].code)
       {
	 found='t';
	 break;
       }
     if(found=='t')
       {
	for(int j=i;j<n;++j)
	 {
	    I[j]=I[j+1];
	 }
	 n--;
	 cout<<"ITEM DELETED";
       }
     else
	 {
	 cout<<"code not found";
	 }
  getch();
  clrscr();
 }
///////////////////////////////////////////////////////////////////////////
///////////////// function to buy product//////////////////////////////////
///////////////////////////////////////////////////////////////////////////
void buy()
{
cout<<"\n\n\n\t Do You Want to Purchase[y/n]:";
cin>>ch;
 if(ch=='y'|| ch=='Y')
 {
   cout<<"\n\n\n\n        ";
   getItem();
 switch(I[n-1].code)
  {
   case 1: I[n-1].price=r1;
     break;
   case 2: I[n-1].price=r2;
     break;
   case 3: I[n-1].price=r3;
     break;
   case 4: I[n-1].price=r4;
     break;
   case 5: I[n-1].price=r5;
     break;
   case 6: I[n-1].price=r6;
     break;
   case 7: I[n-1].price=r7;
     break;
   case 8: I[n-1].price=r8;
     break;
   case 9: I[n-1].price=r9;
     break;
   case 10:I[n-1].price=r10;
     break;
   case 11:I[n-1].price=r11;
     break;
   case 12:I[n-1].price=r12;
   break;
   }


   clrscr();

  cout<<"\n\n\t\t\t\t\tITEM PURCHASED.";
  cout<<"\n\n\n\n\t\t\tLook for next PRODUCT[y/n]:";
  cin>>ch;
  if(ch=='y'|| ch=='Y')
   {
     clrscr();
     product();
     getch();
   }
   else
   {
   clrscr();
   menu();
   getch();
   exit(0);
   }
}
  else
   {
    cout<<"Press ENTER return MAIN MENU";
    getch();
    clrscr();
    menu();
    getch();
    exit(0);
   }
}
void transaction()
{
int x;
clrscr();
cout<<"\n Enter AMOUNT of the bill:" ;
cin>>x;
getch();
cout<<"\n\t\t BILL PAID";
cout<<"\n\n\t\t TRANSACTION COMPLETE";
getch();
exit(0);
}

void bill()                        //function to display bill.
{
 double long  amount,dis;
 double long  total=0;
 long a,b;
  amount=I[i].price*I[i].qty;
  total=amount;
 if(total<20000)
   {
   a= (total*5/100),b=5;
   dis=total-a;
   }
 else if(total>20000)
  {
  a= total/10,b=10;
  dis=total-a;
  }
 cout<<"\n\n\n\n";
 cout<<"\n                LOADING  ALL NECESSARY INFORMATIONS ON THE BILL    ";
 cout<<"\n                PLEASE WAIT !!!";
 for(int l=0;l<6;l++)
 {
 for(long int l=0;l<9999999;l++);
 cout<<".";
 }
 clrscr();
 cout<<"\n\n\n\n\n\t             ALL INFORMATIONS ARE LOADED IN THE BILL  !!!        ";
 getch();
  clrscr();
int pay,AMOUNT,p;
{
 for(int i=0;i<n;i++)
 {  cout<<endl;
 cout<<"\n\t CUSTOMER NAME:"<<I[i].name;
 cout<<"\n\t ITEM CODE:"<<I[i].code;
 cout<<"\n\t ITEM NAME:"<<I[i].pname;
 cout<<"\n\t ITEM QUANTITY:"<<I[i].qty;
 cout<<"\n\t  PRICE :"<<I[i].price;
 cout<<"\n\t  TOTAL  "<<amount;
 cout<<"\n\t  Total discount given:"<<b<<"%";
 cout<<"\n\t  AMOUNT after discount(to pay):Rs"<<dis;
 }
 cout<<"\n please press for payment";
 getch();
 cout<<"\n\t\t ENTER THE AMOUNT:";
 cin>>pay;
 if(pay==total)
 {
 cout<<"\n\t\t\t\t  --------- ";
 cout<<"\n\t\t\t\t**BILL PAID**";
 cout<<"\n\t\t\t\t  ---------";
 getch();
 exit(0);
 }
 if(total==p)
 {
 cout<<"\n\t\t**************";
 cout<<"\n\t\t!BILL CLEARED!";
 cout<<"\n\t\t**************";
 getch();
 exit(0);
 }
}}
//////////////////////////////////////////////////////////////////////////
///////////////////// FUNCTION FOR LCD TV ////////////////////////////////
//////////////////////////////////////////////////////////////////////////
void LCD()
{
cout<<"\n\n\t\t\t\t....DETAILS....";
cout<<"\n\n\n\t\t\t BRAND NAME:SAMSUNG";
cout<<"\n\t\t\t\t FEATURES:* 48 inch display"<<"\t\t\t"<<"<<< CODE:1 >>>";
cout<<"\n\t\t\t\t\t * HD Gaphics";
cout<<"\n\t\t\t\t\t * Voice Recognition";
cout<<"\n\t\t\t\t\t * Most Slimmest metal body";
cout<<"\n\n\t\t\t\t Under WARRANTY of:18 months";
cout<<"\n\t\t\t\t Mfd(Manufactured) on:10/14";
cout<<"\n\t\t\t\t MRP(Maximum retail price):Rs"<<r1<<"/-";

cout<<"\n\n\n\t\t\t\t....~ FREE 3D GLASSES!!! ~....";
buy();
}
/////////////////////////////////////////////////////////////////////////
////////////////function for Refrigerator detais////////////////////////
/////////////////////////////////////////////////////////////////////////

void Fridge()
{
cout<<"\n\n\t\t\t\t....DETAILS....";
cout<<"\n\n\n\t\t\t BRAND:LG";
cout<<"\n\t\t\t\t FEATURES:* Double door"<<"\t\t\t"<<"<<< CODE:2 >>>";
cout<<"\n\t\t\t\t\t * Capacity:300ltrs";
cout<<"\n\t\t\t\t\t * Defrosting system";
cout<<"\n\t\t\t\t\t * Freezer lamp with door lock";
cout<<"\n\t\t\t\t\t * Water dispenser & deodourising";
cout<<"\n\n\t\t\t\t Under WARRANTY of:2 years";
cout<<"\n\t\t\t\t Mfd(Manufactured) on:9/14";
cout<<"\n\t\t\t\t MRP(Maximum retail price):Rs"<<r2<<"/-";
buy();
}
//////////////////////////////////////////////////////////////////////////
/////////////////////function for Washing machine  details////////////////
//////////////////////////////////////////////////////////////////////////

void Washmac()
{
cout<<"\n\n\t\t\t\t....DETAILS....";
cout<<"\n\n\n\t\t\t BRAND:SAMSUNG";
cout<<"\n\t\t\t\t FEATURES:* High spinning speed"<<"\t\t\t"<<"<<< CODE:3 >>>";
cout<<"\n\t\t\t\t\t * Reduced noise level";
cout<<"\n\t\t\t\t\t * Big size,sufficient space";
cout<<"\n\t\t\t\t\t * Quick wash";
cout<<"\n\n\t\t\t\t Under WARRANTY of:4 years";
cout<<"\n\t\t\t\t Mfd(Manufactured) on:10/14";
cout<<"\n\t\t\t\t MRP(Maximum retail price):Rs"<<r3<<"/-";
buy();
}
////////////////////////////////////////////////////////////////////////////
/////////////////////////function for cooler details////////////////////////
////////////////////////////////////////////////////////////////////////////
void cooler()
{
cout<<"\n\n\t\t\t\t....DETAILS....";
cout<<"\n\n\n\t\t\t BRAND:SYMPHONY";
cout<<"\n\t\t\t\t FEATURES:51 litres tank capacity"<<"\t\t\t"<<"<<< CODE:4 >>>";
cout<<"\n\t\t\t\t\t * 185 W cooling power ";
cout<<"\n\t\t\t\t\t * Cooling pad type-Aspen";
cout<<"\n\t\t\t\t\t * Ait delivery 4000cubic metre";
cout<<"\n\t\t\t\t\t * Consumption:250V,50 Hz.";
cout<<"\n\t\t\t\t\t * Dura-pump technology.";
cout<<"\n\n\t\t\t\t Under WARRANTY of:1 years";
cout<<"\n\t\t\t\t Mfd(Manufactured) on:10/14";
cout<<"\n\t\t\t\t MRP(Maximum retail price):Rs"<<r4<<"/-";
buy();
}
/////////////////////////////////////////////////////////////////////////////
/////////////////////function for oven details///////////////////////////////
/////////////////////////////////////////////////////////////////////////////

void microven()
{
cout<<"\n\n\t\t\t\t....DETAILS....";
cout<<"\n\n\n\t\t\t BRAND:SAMSUNG";
cout<<"\n\t\t\t\t FEATURES:Capacity 1.5 cu.ft"<<"\t\t\t"<<"<<< CODE:5 >>>";
cout<<"\n\t\t\t\t\t * Defrost auto";
cout<<"\n\t\t\t\t\t * Steam cleaning";
cout<<"\n\t\t\t\t\t * Ceramic tray,Baking tray";
cout<<"\n\t\t\t\t\t * Pro steamer(including crusty plate)";
cout<<"\n\t\t\t\t\t * Convection amount:40'-250'(8 levels)";
cout<<"\n\n\t\t\t\t Under WARRANTY of:24 months";
cout<<"\n\t\t\t\t Mfd(Manufactured) on:11/14";
cout<<"\n\t\t\t\t MRP(Maximum retail price):Rs"<<r5<<"/-";
buy();
}
void fan()                                     //function for calling fan
{
cout<<"\n\n\t\t\t\t....DETAILS....";
cout<<"\n\n\n\t\t\t BRAND:ORPAT";
cout<<"\n\t\t\t\t FEATURES:* Airflow 240 cfm"<<"\t\t\t"<<"<<< CODE:6 >>>";
cout<<"\n\t\t\t\t * Moto speed 360 RPM";
cout<<"\n\t\t\t\t * Blade sweep 1200mm";
cout<<"\n\t\t\t\t * Metallic powder coated aluminium blade";
cout<<"\n\t\t\t\t * Weight 4kg";
cout<<"\n\t\t\t\t * 14 pole heavy duty,noiseless fan";
cout<<"\n\n\t\t\t\t Under WARRANTY of:1 year";
cout<<"\n\t\t\t\t Mfd(Manufactured) on:10/14";
cout<<"\n\t\t\t\t MRP(Maximum retail price):Rs"<<r6<<"/-";
buy();
}

void ACs()
{                             //function for ac details
cout<<"\n\n\t\t\t\t....DETAILS....";
cout<<"\n\n\n\t\t\t BRAND:HAVELLS";
cout<<"\n\t\t\t\t FEATURES:* White in colour"<<"\t\t\t"<<"<<< CODE:7 >>>";
cout<<"\n\t\t\t\t\t * Keeps cool";
cout<<"\n\t\t\t\t\t * Five Star Mark";
cout<<"\n\t\t\t\t\t * Saves 60% electricity";
cout<<"\n\n\t\t\t\t Under WARRANTY of:2 year";
cout<<"\n\t\t\t\t Mfd(Manufactured) on:10/14";
cout<<"\n\t\t\t\t MRP(Maximum retail price):Rs"<<r7<<"/-";
buy();
}

void mixer()                              //function for calling mixer
{
cout<<"\n\n\t\t\t\t....DETAILS....";
cout<<"\n\n\n\t\t\t BRAND:USHA";
cout<<"\n\t\t\t\t FEATURES:* White in colour"<<"\t\t\t"<<"<<< CODE:8 >>>";
cout<<"\n\t\t\t\t\t * Power saving";
cout<<"\n\t\t\t\t\t * Low noise";
cout<<"\n\t\t\t\t\t * Juicer & grinder";
cout<<"\n\n\t\t\t\t Under WARRANTY of:1 year";
cout<<"\n\t\t\t\t Mfd(Manufactured) on:10/14";
cout<<"\n\t\t\t\t MRP(Maximum retail price):Rs"<<r8<<"/-";
buy();
}

void iron()                              //function for calling iron
{
cout<<"\n\n\t\t\t\t....DETAILS....";
cout<<"\n\n\n\t\t\t BRAND:SUNFLAME";
cout<<"\n\t\t\t\t FEATURES:* 3 way automatic shut-off"<<"\t\t\t"<<"<<< CODE:9 >>>";
cout<<"\n\t\t\t\t\t * Anti drip system";
cout<<"\n\t\t\t\t\t * Ajustable steam dial";
cout<<"\n\t\t\t\t\t * 8.75 inch cord ";
cout<<"\n\t\t\t\t\t * Energy saving control";
cout<<"\n\t\t\t\t\t * Self cleaning";
cout<<"\n\n\t\t\t\t Under WARRANTY of:15 months";
cout<<"\n\t\t\t\t Mfd(Manufactured) on:9/14";
cout<<"\n\t\t\t\t MRP(Maximum retail price):Rs"<<r9<<"/-";
buy();
}
void mobile()                              //function for calling mobile
{
cout<<"\n\n\t\t\t\t....DETAILS....";
cout<<"\n\n\n\t\t\t BRAND:HTC";
cout<<"\n\t\t\t\t FEATURES:* Android OS v4.0.3 (Ice Cream Sandwich)"<<"\t\t\t"<<"<<< CODE:10 >>>";
cout<<"\n\t\t\t\t\t * Super LCD2 with 16M colors";
cout<<"\n\t\t\t\t\t * 8 GB internal memory,512 MB RAm";
cout<<"\n\t\t\t\t\t * Front camera 5 mp & back 16 mp,auto focus LED Flash";
cout<<"\n\t\t\t\t\t * Sense UI 4.0";
cout<<"\n\t\t\t\t\t * Mini-SIM,Bluetooth v4.0";
cout<<"\n\t\t\t\t\t * microSD,up to 32 GB";
cout<<"\n\t\t\t\t\t * Wifi 802.11/b/g/n,Wifi direct, hotspot";
cout<<"\n\t\t\t\t\t * CPU 1 GHz Scorpion";
cout<<"\n\n\t\t\t\t Under WARRANTY of:2 years";
cout<<"\n\t\t\t\t Mfd(Manufactured) on:9/14";
cout<<"\n\t\t\t\t MRP(Maximum retail price):Rs"<<r10<<"/-";
cout<<"\n\n\n\t\t\t\t\t LIMITED STOCKS, HURRY UP!!";

buy();
}
void computer()                              //function for calling computer
{
cout<<"\n\n\t\t\t\t....DETAILS....";
cout<<"\n\n\n\t\t\t BRAND:LENOVO";
cout<<"\n\t\t\t\t FEATURES:* 18.22 inch display"<<"\t\t\t"<<"<<< CODE:11 >>>";
cout<<"\n\t\t\t * Ultra thin design 16.5mm thin ";
cout<<"\n\t\t\t * 1 TB Hard Disk";
cout<<"\n\t\t\t * 4 GB RAM";
cout<<"\n\t\t\t * Intel core i7 ";
cout<<"\n\t\t\t *  OS Windows 8.1";
cout<<"\n\t\t\t * LED Backlight Keyboard ";
cout<<"\n\t\t\t *Charges battery 90% in 30 mins,backup upto 10 hours";
cout<<"\n\n\t\t\t  Under WARRANTY of:2 years";
cout<<"\n\t\t\t  Mfd(Manufactured) on:11/14";
cout<<"\n\t\t\t\t MRP(Maximum retail price):Rs"<<r11<<"/-";

cout<<"\n\n\n\t\t\t\t....~ ULTIMATE THINNEST THINKPAD~ ....";
buy();
}
void heater()                              //function for calling heater
{
cout<<"\n\n\t\t\t\t....DETAILS....";
cout<<"\n\n\n\t\t\t BRAND:PRESTIGE";
cout<<"\n\t\t\t\t FEATURES:* Induction  water heater"<<"\t\t\t"<<"<<< CODE:12 >>>";
cout<<"\n\t\t\t\t\t * Lower standby loss";
cout<<"\n\t\t\t\t\t * 2000watt coil";
cout<<"\n\t\t\t\t\t * Heats within 15mins ";
cout<<"\n\t\t\t\t\t * Aluminum body ";
cout<<"\n\t\t\t\t\t * Rust free ";
cout<<"\n\n\t\t\t\t Under WARRANTY of:2 years";
cout<<"\n\t\t\t\t Mfd(Manufactured) on:9/14";
cout<<"\n\t\t\t\t MRP(Maximum retail price):Rs"<<r12<<"/-";
buy();
}
/////////////////////////////////////////////////////////////////////////////
////////////////////// FUNCTION TO DISPLAY PRODUCTS /////////////////////////
/////////////////////////////////////////////////////////////////////////////
void product()
{ a:
cout<<"\n\n\t\t\t\t<-WELCOME->";
cout<<"\n\n\t\t\t<-...ALL IN ONE ELECTRONICS...->";
cout<<"\n\n\n\t\t\t ~~~PRODUCTS~~~AVAILABLE~~~";
cout<<"\n\t1.LCD";
cout<<"\n\t2.Refrigerator";
cout<<"\n\t3.Washing Machine";
cout<<"\n\t4.Cooler";
cout<<"\n\t5.Microven";
cout<<"\n\t6.Ceiling Fan";
cout<<"\n\t7.ACs";
cout<<"\n\t8.Mixer & Grinder";
cout<<"\n\t9.Iron";
cout<<"\n\t10.Mobile Handset";
cout<<"\n\t11.Computers(PCs)";
cout<<"\n\t12.Heater";

cout<<"\n\n Do you want to buy the product[y/n]...";
cin>>ch;
if(ch=='y'|| ch=='Y')
cout<<"\n please continue..." ;
else
 {
 getch();
 clrscr();
 menu();

 }
cout<<"\n\n\n\t ENTER YOUR CHOICE[1-12]:";
{
cin>>choice;
clrscr();
}
switch(choice)
{
case 1:               //calling the LCD function
       clrscr();
       LCD();
       getch();
       break;

case 2:
       clrscr();
       Fridge();       //calling the fridge function
       getch();
       break;

case 3:clrscr();
       Washmac();      //calling the washmac function
       getch();
       break;

case 4:clrscr();
       cooler();       //calling the cooler function
       getch();
       break;

case 5:
       clrscr();
       microven();      //calling the oven function
       getch();
       break;

case 6:clrscr();
       fan();
       getch();
       break;

case 7:
       clrscr();
       ACs();
       getch();
       break;

case 8:
       clrscr();
       mixer();
       getch();
       break;

case 9:
       clrscr();
       iron();
       getch();
       break;

case 10:
       clrscr();
       mobile();
       getch();
       break;

case 11:
       computer();
       clrscr();
       getch();
       break;

case 12:
       heater();
       clrscr();
       getch();
       break;
}
goto a;
}
/////////////////////////////////////////////////////////////////////////////
//////////////////////////FUNCTION FOR MENU /////////////////////////////////
/////////////////////////////////////////////////////////////////////////////
void menu()
{
choice:
do
{
 cout<<"\n!*******************************************************************!";
 cout<<"\n!                        A L L  IN  O N E                           !";
 cout<<"\n!      E L E C T R O N I C S                     S H O P            !";
 cout<<"\n!*******************************************************************!";
 cout<<"\n\n\n\n\t\t\t      1.Display Item\n";
 cout<<"\n\n\t\t\t      2.Search Item\n";
 cout<<"\n\n\t\t\t      3.Modification of Item\n";
 cout<<"\n\n\t\t\t      4.Delete Item\n";
 cout<<"\n\n\t\t\t      5.Bill\n";
 cout<<"\n\n\t\t\t      6.Exit\n";
 cout<<"\n\t    Enter Your choice:";
 cin>>choice;
clrscr();
switch(choice)
 {
  case 1:
				    //calling display function..
	  clrscr();
	  product(); // TO DISPLAY THE PRODUCTS OF THE SHOP
	  getch();
	  break;
  case 2://calling search function for searching an item..
	 int sk;
	 cout<<"\n\n\t\tEnter iten code to be searched:";
	 cin>>sk;
	 search(sk);
	 break;
  case 3://calling modify function for modifying an item..
	 int a;
	 cout<<"\n\n\t\tEnter iten code to be modified:";
	 cin>>a;
	 modify(a);
	 break;
  case 4://calling delItem function for deleting an item..
	 int c;
	 cout<<"\n\n\t\tEnter iten code to be deleted:";
	 cin>>c;
	 delItem(c);
	 clrscr();
	 break;
  case 5://for diplaying the bill
	 cout<<"\n\t\t!*************************************************";
	 cout<<"\n\t\t!  ALL  IN  ONE  ELECTRONICS  SHOP    ";
	 cout<<"\n\t\t!*************************************************";
	bill();
	 break;
  case 6://for coming out of the software..
	 cout<<"\t\tThank You for using our software..";
	 cout<<"\n\t\tUse it Again..\n\n\t\tPress ENTER to EXIT....";
	 getch();
	 exit(1);//function for quitting the software..
	 break;
 }
 goto choice;
}while(choice!=5);

}


/////////////////////////////////////////////////////////////////////////////
//**********************  M A I N  F U N C T I O N **************************
/////////////////////////////////////////////////////////////////////////////
void main()
{
clrscr();
textcolor(YELLOW);
menu();
getch();
}