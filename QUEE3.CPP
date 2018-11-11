//question number 3
#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int A, B, C;
cout<<"\n Enter the first number:";
cin>>A;
cout<<"\n Enter the second number:";
cin>>B;
cout<<"\n Enter the third number:";
cin>>C;
if(A>B)
	if(A>C)
	cout<<"\n Maximum number is:"<<A;
	else
	cout<<"\n Maximum number is:"<<C;
else if (B>C)
	cout<<"\n Maximum number is:"<<B;
	else
	cout<<"\n Maximum number is:"<<C;
	getch();
}