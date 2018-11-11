#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int k,l;
int i=1;
while(i<=5)
{
int j=3*i;
cout<<endl;
while(j>(3*i)-3)
{
cout<<j<<"\t";
j--;
}
i++;
}
getch();
}