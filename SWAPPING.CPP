//swapping 2 numbers
// to display the grades
#include<iostream.h>
#include<conio.h>
void main()
{
int A,B;
clrscr();
cout<<"enter first number:";
cin>>A ;
cout<<"enter second number:";
cin>>B;
clrscr();
cout<<"before processing A is:"<<A
<<"and B is:"<<B;
A=A+B;
B=A-B ;
A=A-B;
cout<<"\nthe no.s after swapping are A ";
cout<<A<<" \nand B is"<<B;;
getch();
}