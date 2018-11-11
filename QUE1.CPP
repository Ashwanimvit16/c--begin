//question number 1
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int A, B;
cout<<"Enter the first number:";
cin>>A;
cout<<"\n Enter the second number:";
cin>>B;
cout<<"\n VALUE BEFORE SWAPPING:"<<"\n First Number:"<<A<<"\n Second Number:"<<B;
A=A+B;
B=A-B;
A=A-B;
//VALUE AFTER SWAPPING
cout<<"\n Value after swapping is:";
cout<<"\n First Number:\t"<<A;
cout<<"\n Second Number:\t"<<B;
getch();
}