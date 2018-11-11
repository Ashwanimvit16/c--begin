//question number 4
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int m;
cout<<"\n Enter the month number:";
cin>>m;
switch(m)
{
case 1: cout<<"\n Month Name: January and No. of Days:31";
break;
case 2: cout<<"\n Month Name: February and No. of Days:28/29";
break;
case 3: cout<<"\n Month Name: March and No. of Days:31";
break;
case 4: cout<<"\n Month Name: April and No. of Days:30";
break;
case 5: cout<<"\n Month Name: May and No. of Days:31";
break;
case 6: cout<<"\n Month Name: June and No. of Days:30";
break;
case 7: cout<<"\n Month Name: July and No. of Days:31";
break;
case 8: cout<<"\n Month Name: August and No. of Days:31";
break;
case 9: cout<<"\n Month Name: September and No. of Days:30";
break;
case 10: cout<<"\n Month Name: october and No. of Days:31";
break;
case 11: cout<<"\n Month Name: Novermber and No. of Days:30";
break;
case 12: cout<<"\n Month Name: December and No. of Days:31";
break;
default: cout<<"\n !!!!! INVALID ! !!! ! CHOICE !!!!!:";
}
getch();
}
