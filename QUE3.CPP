//using ternary operators finding greatest of three numbers
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int A, B, C, big;
cout<<"\n Enter the first number:";
cin>>A;
cout<<"\n Enter the Second Number:";
cin>>B;
cout<<"\n Enter the third number:";
cin>>C;
	big=(A>B)?((A>C)? A:C):((B>C)? B:C);
cout<<"\n Smalles Number is:"<<big;
getch();
}
